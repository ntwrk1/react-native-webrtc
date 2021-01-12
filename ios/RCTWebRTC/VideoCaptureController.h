
#import <Foundation/Foundation.h>
#import <WebRTC/RTCCameraVideoCapturer.h>

@interface VideoCaptureController : NSObject

-(instancetype)initWithCapturer:(RTCCameraVideoCapturer *)capturer
                 andConstraints:(NSDictionary *)constraints;
-(void)startCapture;
-(void)stopCapture;
-(void)switchCamera;
-(void)zoomTo:(CGFloat)scale;
-(void)focusAt:(CGPoint)point;

@end
