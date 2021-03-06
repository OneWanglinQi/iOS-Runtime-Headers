/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface C2SessionTask : NSObject <C2SessionTaskDelegate> {
    struct os_activity_s { } * _activity;
    unsigned int  _attemptCount;
    <C2RequestDelegate> * _delegate;
    double  _initTime;
    unsigned char  _isComplete;
    C2RequestOptions * _options;
    double  _resetTime;
    <C2SessionTaskDelegate> * _sessionTaskDelegate;
    NSURLSessionDataTask * _task;
    id /* block */  _testBehavior_reportMetric;
}

@property (nonatomic, readonly) struct os_activity_s { }*activity;
@property (nonatomic) unsigned int attemptCount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <C2RequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initTime;
@property (nonatomic) unsigned char isComplete;
@property (nonatomic, readonly, copy) C2RequestOptions *options;
@property (nonatomic) double resetTime;
@property (nonatomic, retain) <C2SessionTaskDelegate> *sessionTaskDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLSessionDataTask *task;
@property (nonatomic, copy) id /* block */ testBehavior_reportMetric;

+ (double)captureMetricDurationBetweenStart:(double)arg1 andEnd:(double)arg2;
+ (double)captureMetricsForTimingData:(id)arg1 withKey:(id)arg2;

- (void).cxx_destruct;
- (void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (struct os_activity_s { }*)activity;
- (unsigned int)attemptCount;
- (void)captureMetricsWithError:(id)arg1 eventType:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (void)handleCallbackForTask:(id)arg1 callback:(id /* block */)arg2;
- (double)initTime;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2 sessionTaskDelegate:(id)arg3;
- (void)invalidate;
- (unsigned char)isComplete;
- (id)options;
- (double)resetTime;
- (id)sessionTaskDelegate;
- (void)setAttemptCount:(unsigned int)arg1;
- (void)setInitTime:(double)arg1;
- (void)setIsComplete:(unsigned char)arg1;
- (void)setResetTime:(double)arg1;
- (void)setSessionTaskDelegate:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTestBehavior_reportMetric:(id /* block */)arg1;
- (id)task;
- (id)taskDescription;
- (id /* block */)testBehavior_reportMetric;

@end
