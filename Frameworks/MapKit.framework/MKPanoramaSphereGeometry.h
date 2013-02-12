/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPanoramaSphereGeometry : MKStreetViewGeometry {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
    NSUInteger _latitudeSlices;
    float _latitudeTiles;
    NSUInteger _longitudeSlices;
    float _longitudeTiles;
    NSUInteger _numLevels;
    NSInteger *_tileNumVertices;
    } _tileSize;
}

- (void)_generateSphereVerticesForMaxTheta:(float)arg1;
- (void)dealloc;
- (void)drawWithTextures:(id)arg1;
- (id)initWithImageSize:(struct CGSize { float x1; float x2; })arg1 tileSize:(struct CGSize { float x1; float x2; })arg2;

@end