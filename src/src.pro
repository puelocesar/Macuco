TEMPLATE = app
TARGET = macuco
SOURCES = flickable.cpp \
    main.cpp \
    webview.cpp \
    mainwindow.cpp \
    errorbox.cpp \
    networkcookiejar.cpp
HEADERS = flickable.h \
    webview.h \
    mainwindow.h \
    webpage.h \
    errorbox.h \
    networkcookiejar.h
QT += network \
    webkit
FORMS += errorbox.ui
RESOURCES += resources.qrc

unix {
    #VARIABLES
    isEmpty(PREFIX) {
        PREFIX = /usr/local
    }
    BINDIR = $$PREFIX/bin
    DATADIR = $$PREFIX/share

    DEFINES += DATADIR=\\\"$$DATADIR\\\" PKGDATADIR=\\\"$$PKGDATADIR\\\"

    #MAKE INSTALL
    INSTALLS += target desktop iconxpm icon26 icon40 icon64

    target.path =$$BINDIR

    desktop.path = $$DATADIR/applications/hildon
    desktop.files += macuco.desktop

    iconxpm.path = $$DATADIR/pixmap
    iconxpm.files += data/maemo/macuco.xpm

    icon26.path = $$DATADIR/icons/hicolor/26x26/apps
    icon26.files += data/26x26/macuco.png

    icon40.path = $$DATADIR/icons/hicolor/40x40/apps
    icon40.files += data/40x40/macuco.png

    icon64.path = $$DATADIR/icons/hicolor/64x64/apps
    icon64.files += data/64x64/macuco.png
}

