/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYResetResponse : PBCodable <NSCopying> {
    BOOL  _accepted;
    SYErrorInfo * _error;
    SYMessageHeader * _header;
}

@property (nonatomic) BOOL accepted;
@property (nonatomic, retain) SYErrorInfo *error;
@property (nonatomic, readonly) BOOL hasError;
@property (nonatomic, retain) SYMessageHeader *header;

- (void).cxx_destruct;
- (BOOL)accepted;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (BOOL)hasError;
- (unsigned int)hash;
- (id)header;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAccepted:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
