TEMPLATE = subdirs
SUBDIRS  = src kdwsdl2cpp examples unittests
CONFIG   += ordered
VERSION  = 1.2.0

unix:DEFAULT_INSTALL_PREFIX = /usr/local/KDAB/KDSoap-$$VERSION
win32:DEFAULT_INSTALL_PREFIX = "C:\KDAB\KDSoap"-$$VERSION

# for backw. compat. we still allow manual invocation of qmake using PREFIX:
isEmpty( KDSOAP_INSTALL_PREFIX ): KDSOAP_INSTALL_PREFIX=$$PREFIX

# if still empty we use the default:
isEmpty( KDSOAP_INSTALL_PREFIX ): KDSOAP_INSTALL_PREFIX=$$DEFAULT_INSTALL_PREFIX

# if the default was either set by configure or set by the line above:
equals( KDSOAP_INSTALL_PREFIX, $$DEFAULT_INSTALL_PREFIX ){
    INSTALL_PREFIX=$$DEFAULT_INSTALL_PREFIX
    unix:message( "No install prefix given, using default of" $$DEFAULT_INSTALL_PREFIX (use configure.sh -prefix DIR to specify))
    !unix:message( "No install prefix given, using default of" $$DEFAULT_INSTALL_PREFIX (use configure -prefix DIR to specify))
} else {
    INSTALL_PREFIX=\"$$KDSOAP_INSTALL_PREFIX\"
}

message(Install prefix is $$INSTALL_PREFIX)
message(This is KD Soap version $$VERSION)

# make a newline in case .qmake.cache exists and does not end with one
# (an existing cache file is overriden, this is intended - a user can
# always place custom settings one directory level up)
unix:MESSAGE = '\\'$$LITERAL_HASH' KDAB qmake cache file autogenerated during qmake run'
!unix:MESSAGE = $$LITERAL_HASH' KDAB qmake cache file autogenerated during qmake run'
system('echo $${MESSAGE} > .qmake.cache')
# store PREFIX:
system('echo INSTALL_PREFIX=$$INSTALL_PREFIX >> .qmake.cache')
system('echo VERSION=$$VERSION >> .qmake.cache')

# forward make test calls to unittests:
test.target=test
unix:!macx:test.commands=export LD_LIBRARY_PATH=\"$$PWD/lib\":$$(LD_LIBRARY_PATH); (cd unittests && make test)
macx:test.commands=export DYLD_LIBRARY_PATH=\"$$PWD/lib\":$$(DYLD_LIBRARY_PATH); (cd unittests && make test)
win32:test.commands=(cd unittests && nmake test)
test.depends = $(TARGET)
QMAKE_EXTRA_TARGETS += test

# install licenses: 
licenses.files = Licenses
licenses.path = $$INSTALL_PREFIX
INSTALLS += licenses

readme.files = README.KDSoap
readme.path = $$INSTALL_PREFIX
INSTALLS += readme
