#include "app/organicmaps/sdk/core/jni_helper.hpp"

#include "app/organicmaps/sdk/Framework.hpp"

#include "indexer/map_style.hpp"

extern "C"
{
JNIEXPORT void Java_app_organicmaps_sdk_MapStyle_nativeSet(JNIEnv *, jclass, jint mapStyle)
{
  if (!g_framework)
    return;
  auto const val = static_cast<MapStyle>(mapStyle);
  if (val != g_framework->GetMapStyle())
    g_framework->SetMapStyle(val);
}

JNIEXPORT jint Java_app_organicmaps_sdk_MapStyle_nativeGet(JNIEnv *, jclass)
{
  if (!g_framework)
    return 0;
  return g_framework->GetMapStyle();
}

JNIEXPORT void Java_app_organicmaps_sdk_MapStyle_nativeMark(JNIEnv *, jclass, jint mapStyle)
{
  if (!g_framework)
    return;
  auto const val = static_cast<MapStyle>(mapStyle);
  if (val != g_framework->GetMapStyle())
    g_framework->MarkMapStyle(val);
}
}
