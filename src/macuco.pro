TEMPLATE = app
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
