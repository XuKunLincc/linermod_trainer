g++ -shared -fPIC main.cpp -o libLinemodTrainer.so -Iinclude -lopencv_core -lopencv_objdetect -lobject_recognition_renderer_3d -lboost_filesystem -std=c++11
