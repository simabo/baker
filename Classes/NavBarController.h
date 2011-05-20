//
//  NavBarController.h
//  Baker
//
//  Created by David Haslem on 5/19/11.
//  Copyright 2011 Orange Sparkle Ball, inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShelfViewController.h"
#import "Shelf.h"

@class RootViewController;

@interface NavBarController : UIViewController {
    BOOL popoverShowing;
    ShelfViewController* shelfViewController;
    RootViewController* rootViewController;
    UIPopoverController* popover;
    UIBarButtonItem* bookmarkButton;
    Shelf* shelf;
}

@property (nonatomic,retain) ShelfViewController* shelfViewController;
@property (nonatomic,retain) RootViewController* rootViewController;
@property (nonatomic,retain) Shelf* shelf;

- (id) initWithShelf:(Shelf*) newShelf andRootView:(RootViewController*)rootView;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)hidden withAnimation:(BOOL)animation;
- (void)willRotate;
- (void)resetFrameSize:(CGRect)frame;
- (void)fadeOut;
- (void)fadeIn;
- (void)togglePopover;
- (void)showPopover;
- (void)hidePopoverWithAnimation:(BOOL)anim;
- (void)openBookAtPath:(NSString*)path;

@end
