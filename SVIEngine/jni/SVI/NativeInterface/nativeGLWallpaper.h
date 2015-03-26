/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_github_sviengine_glsurface_SVIGLSurface */

#ifndef _Included_com_github_sviengine_glsurface_SVIGLWallpaper
#define _Included_com_github_sviengine_glsurface_SVIGLWallpaper
#ifdef __cplusplus
extern "C" {
#endif
#undef com_github_sviengine_glsurface_SVIGLWallpaper_DEBUG
#define com_github_sviengine_glsurface_SVIGLWallpaper_DEBUG 1L

void requestRenderGLWallpaper();

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeGetHandle
 * Signature: ()V
 */
JNIEXPORT jint JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeGetHandle
  (JNIEnv *, jclass, jobject obj);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeInitSVIGLSurface
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeInitSVIGLSurface
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeResizeSVIGLSurface
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeResizeSVIGLSurface
  (JNIEnv *, jclass, jint, jint, jint,jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeRenderSVIGLSurface
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeRenderSVIGLSurface
  (JNIEnv *, jclass, jint updateMsg,jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeResumeSVIGLSurface
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeResumeSVIGLSurface
  (JNIEnv *, jclass,jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativePauseSVIGLSurface
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativePauseSVIGLSurface
  (JNIEnv *, jclass,jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeSetAssetManager
 * Signature: (Landroid/content/res/AssetManager;)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeSetAssetManager
  (JNIEnv *, jclass, jobject,jint);


JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeSwapAnimationSVIGLSurface
	(JNIEnv *, jclass,jint);


JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeTouchEvent
	(JNIEnv *, jclass, jint, jfloat, jfloat,jint);


//2012-01-02 masterkeaton27@gmail.com
//display & log fps info.
JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeEnableShowFPS
	(JNIEnv *, jclass, jboolean,jint);

JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeEnableLogFPS
	(JNIEnv *, jclass, jboolean,jint);

//2012-01-13 masterkeaton27@gmail.com
//enable translucent
JNIEXPORT void JNICALL Java_com_github_sviengine_glwallpaperservice_SVIWallpaperNative_nativeEnableTranslucent
	(JNIEnv *, jclass, jboolean,jint);


#ifdef __cplusplus
}
#endif
#endif
