#include <jni.h>
#include <tung.hpp>

extern "C" {
    jstring Java_kstn_tung_cli_MainActivity_stringFromJNI(JNIEnv *env, jobject);
}

jstring Java_kstn_tung_cli_MainActivity_stringFromJNI(JNIEnv *env, jobject) {
    return env->NewStringUTF(get_string().c_str());
}
