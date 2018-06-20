#include <jni.h>
#include <string>

extern "C" {
    jstring Java_kstn_tung_cli_MainActivity_stringFromJNI(JNIEnv *env, jobject);
}

jstring Java_kstn_tung_cli_MainActivity_stringFromJNI(JNIEnv *env, jobject) {
    std::string hello = "Tạ Quang Tùng + Nguyễn Ngân";
    return env->NewStringUTF(hello.c_str());
}
