[![PingStart](http://www.pingstart.com/static/home/images/pingstart.png)](http://www.pingstart.com)

PingStart description

## Requirements
- iOS 7.0+
- required ARC
- xcode 8.0 +

## Installation

### Installation with CocoaPods
To integrate PSSDK-iOS into your Xcode project using CocoaPods, specify it in your `Podfile`:
```ruby
source 'https://github.com/CocoaPods/Specs.git'
platform :ios, '8.0'

target 'TargetName' do
pod 'PSSDK-iOS', '~> 1.0'
end
```

Then, run the following command:

```bash
$ pod install
```

## Manually, using the SDK download

1. Download and unzip the PSSDK-iOS
2. Drag the PSSDK-iOS folder into your Xcode application group (be sure to check the “Copy items into destination group’s folder” option).
3. Add the following frameworks or libraries to your project. To do this, click on your application’s target, then click on Build Phases and expand the Link Binary With Libraries group.
    requires the following frameworks:
   . 'CoreGraphics.framework' 
   . 'UIKit.framework'
   . 'Foundation.framework' 
   . 'QuartzCore.framework' 
   . 'StoreKit.framework'
   . 'SystemConfiguration.framework'
   . 'CoreTelephony.framework'
   requires the following libraries:
   . libz.tbd
4. Go to Targer->Build Settings->All
   Search for "other linker flags", add "-ObjC" in other linker flags
   
## Usage

### oc
```
//1、property
@property(nonatomic,strong)PSVideoView *adView;

//2、init
self.adView = [[PSVideoView alloc] initWithPublisherId:YOUR_PUBLISHER_ID slotId:YOUR_SLOT_ID];
_adView.delegate = self;
[_adView loadAd];
    
//3、delegate
-(void)psAdViewDidReceiveAd:(PSVideoView *)view{
    [view presentFullScreen:self];
}
***other delegate***
```
See the finished example 
```
#import "ViewController.h"
#import "PingStart.h"

@interface ViewController ()<PSVideoDelegate>
@property(nonatomic,strong)PSVideoView *adView;
@end

@implementation ViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    self.adView = [[PSVideoView alloc] initWithPublisherId:YOUR_PUBLISHER_ID slotId:YOUR_SLOT_ID];
    _adView.delegate = self;
    [_adView loadAd];
}
-(void)psAdViewDidReceiveAd:(PSVideoView *)view{
    [view presentFullScreen:self];
}
@end
```
### swift

add following line to `YOUR_PROJECT-Bridging-Header.h`
```
#import "PingStart.h"
```

```
//1、property
var adView : PSVideoView!

//2、init
adView = PSVideoView(publisherId:YOUR_PUBLISHER_ID,slotId:YOUR_SLOT_ID)
adView.delegate = self
adView.loadAd()
    
//3、delegate
func psAdViewDidReceiveAd(_ view: PSVideoView!) {
    view.presentFullScreen(self)
}
***other delegate***
```
See the finished example 
```
import UIKit

class ViewController: UIViewController,PSVideoDelegate {
    var adView : PSVideoView!

    override func viewDidLoad() {
        super.viewDidLoad()
        PingStart.enableDebug(true)
        
        adView = PSVideoView(publisherId:YOUR_PUBLISHER_ID,slotId:YOUR_SLOT_ID)
        adView.delegate = self
        adView.loadAd()
    }

    func psAdViewDidReceiveAd(_ view: PSVideoView!) {
        view.presentFullScreen(self)
    }
}
```
