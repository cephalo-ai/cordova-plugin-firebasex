#import <Cordova/CDV.h>

@interface FirebasePerformancePlugin : CDVPlugin
+ (FirebasePerformancePlugin *)firebasePerformancePlugin;

- (void)startTrace:(CDVInvokedUrlCommand *)command;
- (void)incrementCounter:(CDVInvokedUrlCommand *)command;
- (void)stopTrace:(CDVInvokedUrlCommand *)command;
- (void)setPerformanceCollectionEnabled:(CDVInvokedUrlCommand *)command;

- (void)handlePluginExceptionWithContext:(NSException *)exception
                                        :(CDVInvokedUrlCommand *)command;
- (void)handlePluginExceptionWithoutContext:(NSException *)exception;
- (void)_logError:(NSString *)msg;

- (void)createChannel:(CDVInvokedUrlCommand *)command;
- (void)setDefaultChannel:(CDVInvokedUrlCommand *)command;
- (void)deleteChannel:(CDVInvokedUrlCommand *)command;
- (void)listChannels:(CDVInvokedUrlCommand *)command;
@property(nonatomic, readwrite) NSMutableDictionary *traces;

@end
