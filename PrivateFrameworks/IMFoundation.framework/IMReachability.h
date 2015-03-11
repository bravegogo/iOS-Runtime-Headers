/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class <IMReachabilityDelegate>, NSObject<OS_dispatch_queue>, NSString;

@interface IMReachability : NSObject {
    <IMReachabilityDelegate> *_delegate;
    NSString *_description;
    unsigned int _flags;
    BOOL _gettingFlags;
    NSObject<OS_dispatch_queue> *_queue;
    void *_reachabilityRef;
}

@property NSObject<OS_dispatch_queue> * _queue;
@property(readonly) BOOL connectionRequired;
@property <IMReachabilityDelegate> * delegate;
@property unsigned int flags;
@property BOOL gettingFlags;
@property(retain) NSString * reachabilityDescription;
@property void* reachabilityRef;

+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityWithLocalAddress:(id)arg1 remoteAddress:(id)arg2;
+ (id)reachabilityWithRemoteAddress:(id)arg1;

- (void)_forceGetFlagsIfNecessary;
- (void)_handleCallbackForSCNetworkReachability:(struct __SCNetworkReachability { }*)arg1;
- (id)_initWithReachabilityRef:(struct __SCNetworkReachability { }*)arg1 description:(id)arg2 delegate:(id)arg3;
- (id)_queue;
- (BOOL)connectionRequired;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned int)flags;
- (BOOL)gettingFlags;
- (id)initWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 delegate:(id)arg3;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (id)reachabilityDescription;
- (void*)reachabilityRef;
- (void)setDelegate:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setGettingFlags:(BOOL)arg1;
- (void)setReachabilityDescription:(id)arg1;
- (void)setReachabilityRef:(void*)arg1;
- (void)set_queue:(id)arg1;

@end