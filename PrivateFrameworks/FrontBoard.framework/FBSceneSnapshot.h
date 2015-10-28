/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneSnapshot : NSObject {
    FBSceneSnapshotContext *_context;
    FBScene *_scene;
    XBDisplaySnapshot *_snapshot;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) struct __IOSurface { }*IOSurface;
@property (nonatomic, readonly, retain) UIImage *UIImage;
@property (nonatomic, readonly, retain) FBSceneSnapshotContext *context;
@property (getter=isDataLoaded, nonatomic, readonly) BOOL dataLoaded;

- (struct CGImage { }*)CGImage;
- (struct __IOSurface { }*)IOSurface;
- (id)UIImage;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_baseTransformForSnapshotContext:(id)arg1 rootContext:(id)arg2;
- (id)_collectLayersToSnapshotFromScene:(id)arg1 withSnapshotContext:(id)arg2 rootContext:(id)arg3;
- (void)capture;
- (id)context;
- (void)dealloc;
- (id)initWithScene:(id)arg1 snapshotContext:(id)arg2;
- (BOOL)isDataLoaded;

@end