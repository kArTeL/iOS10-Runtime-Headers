/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSegmentArtworkSet : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _artworkIndexs;
}

@property (nonatomic, readonly) unsigned int*artworkIndexs;
@property (nonatomic, readonly) unsigned int artworkIndexsCount;

- (void)addArtworkIndex:(unsigned int)arg1;
- (unsigned int)artworkIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)artworkIndexs;
- (unsigned int)artworkIndexsCount;
- (void)clearArtworkIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setArtworkIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)writeTo:(id)arg1;

@end