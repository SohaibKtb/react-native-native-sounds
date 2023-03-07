
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNNativeSoundesSpec.h"

@interface NativeSoundes : NSObject <NativeNativeSoundesSpec>
#else
#import <React/RCTBridgeModule.h>

@interface NativeSoundes : NSObject <RCTBridgeModule>
#endif

@end
