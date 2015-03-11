/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVPlayerItemErrorLogEvent, NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
    AVPlayerItemErrorLogEvent *_event;
}

@property(readonly) NSString * URI;
@property(readonly) NSDate * date;
@property(readonly) NSString * errorComment;
@property(readonly) NSString * errorDomain;
@property(readonly) int errorStatusCode;
@property(readonly) NSString * playbackSessionID;
@property(readonly) NSString * serverAddress;

- (void).cxx_destruct;
- (id)URI;
- (id)_initWithAVItemErrorLogEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)errorComment;
- (id)errorDomain;
- (int)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;

@end