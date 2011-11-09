/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@class <AOSNotifySessionDelegate>;

@interface AOSNotifySession : NSObject  {
    unsigned int _serverPort;
    <AOSNotifySessionDelegate> *_delegate;
}

@property <AOSNotifySessionDelegate> * delegate;

+ (id)copySetupToken:(id*)arg1;
+ (id)copySerialNum:(id*)arg1;
+ (id)copyStoreAccount;

- (void)setDelegate:(id)arg1;
- (id)removeAccount:(id)arg1;
- (id)retrieveCurrentAccountForService:(id)arg1 returningAccount:(id*)arg2;
- (id)retrieveAllAccounts:(id*)arg1;
- (id)vetEmailAccount:(id)arg1;
- (id)cancelEmailVet;
- (id)getSetupToken:(id*)arg1;
- (void)_topicNotified:(id)arg1;
- (void)startListeningOnTopic:(id)arg1;
- (void)stopListeningOnTopic:(id)arg1;
- (void)_vetResultReceived:(id)arg1;
- (void)_vetFinished:(id)arg1;
- (id)delegate;
- (void)_stopDeliveringNotifications;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)addAccount:(id)arg1;

@end