#ifdef _WIN32
  // both win32 and win64 are defined here
  #include "cc_windows.h"
#elif defined(__ANDROID__)
  // Android only. Do NOT key this off TUN2SOCKS: lwipopts.h defines TUN2SOCKS
  // on every platform, and lwip/opt.h is pulled in before arch/cc.h, so testing
  // TUN2SOCKS here made Linux/macOS builds include cc_android.h and fail on the
  // missing <android/log.h>.
  #include "cc_android.h"
#else
  #include "cc_others.h"
#endif
