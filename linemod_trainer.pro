TEMPLATE = lib
CONFIG += console c++11 dll
CONFIG -= app_bundle
CONFIG -= qt

TARGET = LinemodTrainer

SOURCES += main.cpp

INCLUDEPATH += include

HEADERS += \
    include/idetector.h \
    include/itrainer.h \
    include/simaple_trainer.h \
    include/trainer_listener.h \
    include/vision.h \
    include/linemod_trainer.h \
    include/c_base_trainer.h \
    include/object_recognition_renderer/renderer.h \
    include/object_recognition_renderer/renderer2d.h \
    include/object_recognition_renderer/renderer3d.h \
    include/object_recognition_renderer/utils.h
