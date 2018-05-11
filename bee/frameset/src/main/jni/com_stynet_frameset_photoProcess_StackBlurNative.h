/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_stynet_frameset_photoProcess_StackBlurNative */

#ifndef _Included_com_stynet_frameset_photoProcess_StackBlurNative
#define _Included_com_stynet_frameset_photoProcess_StackBlurNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_stynet_frameset_photoProcess_StackBlurNative
 * Method:    blurPixels
 * Signature: ([IIII)V
 * javah导出类的头文件抛出异常——java.lang.IllegalArgumentException: Not a valid class name（原因及解决方法）https://blog.csdn.net/PacosonSWJTU/article/details/50615988
 * Android studio 下JNI编程实例并生成so库 https://www.cnblogs.com/jymblog/p/5526865.html
 * Android Studio生成Jni头文件的方法 https://blog.csdn.net/wang_zhi_hao/article/details/49126955
 * [Android Studio] 向您的项目添加 C 和 C++ 代码 https://blog.csdn.net/check816/article/details/77074323
 * NDK开发基础①使用Android Studio编写NDK https://www.jianshu.com/p/f1b8b97d2ef8
 * 使用AndroidStudio编写第一个JNI程序 https://blog.csdn.net/u011652925/article/details/78272406
 * android studio编译c生成.so文件 https://blog.csdn.net/qq_36788768/article/details/59487103
 * Android studio简单使用JNI实例 https://blog.csdn.net/wangliu1102/article/details/78919742
 * AndroidStudio开发第一个JNI工程 https://blog.csdn.net/yangyao_iphone/article/details/51135769
 * Android Studio 简单生成so文件并调用 https://blog.csdn.net/leilifengxingmw/article/details/71598687
 * android--使用NDK-build生成so https://blog.csdn.net/qq_26819733/article/details/69061664
 *
 * [Android]-图片JNI（C++\Java）高斯模糊的实现与比较 http://www.jcodecraeer.com/a/anzhuokaifa/androidkaifa/2014/1115/1987.html
 * android 图片 高斯模糊 Blur Android Studio JNI NDK 生成 so 问题汇总 https://www.jianshu.com/p/d3ab6de52712
 * https://github.com/qiujuer/ImageBlurring
 * https://github.com/kikoso/android-stackblur
 */
JNIEXPORT void JNICALL Java_com_stynet_frameset_photoProcess_StackBlurNative_blurPixels
  (JNIEnv *, jclass, jintArray, jint, jint, jint);

/*
 * Class:     com_stynet_frameset_photoProcess_StackBlurNative
 * Method:    blurBitmap
 * Signature: (Landroid/graphics/Bitmap;I)V
 */
JNIEXPORT void JNICALL Java_com_stynet_frameset_photoProcess_StackBlurNative_blurBitmap
  (JNIEnv *, jclass, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
