TEMPLATE = app
SOURCES = flickable.cpp \
    main.cpp \
    webview.cpp \
    networkaccessmanager.cpp \
    mainwindow.cpp
HEADERS = flickable.h \
    webview.h \
    networkaccessmanager.h \
    mainwindow.h \
    webpage.h
QT += network \
    webkit
FORMS += 
RESOURCES += resources.qrc
