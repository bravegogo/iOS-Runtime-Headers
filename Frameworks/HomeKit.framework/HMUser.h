/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class NSString, NSUUID;

@interface HMUser : NSObject <NSSecureCoding> {
    NSString *_name;
    NSUUID *_uuid;
}

@property(copy,readonly) NSString * name;
@property(retain) NSUUID * uuid;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)configure:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end