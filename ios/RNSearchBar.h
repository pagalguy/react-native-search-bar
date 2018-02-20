#import <UIKit/UIKit.h>
#import <React/RCTComponent.h>

@class RCTEventDispatcher;

@interface RNSearchBar : UISearchBar

- (instancetype)initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher NS_DESIGNATED_INITIALIZER;

@property(nonatomic) BOOL _jsShowsCancelButton;
@property(nonatomic) BOOL _jsShouldBeginEditing;
@property(nonatomic, copy) RCTBubblingEventBlock onSearchButtonPress;
@property(nonatomic, copy) RCTBubblingEventBlock onCancelButtonPress;

@end
