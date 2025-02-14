// Copyright 2016-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>

// TODO(b/151929968): Delete import of delegate headers when client code has been migrated to no
// longer import delegates as transitive dependencies.
#import "MDCCollectionInfoBarViewDelegate.h"

// API_DEPRECATED_BEGIN("🕘 Schedule time to migrate. "
//                      "Use branded UITableView or UICollectionView instead: go/material-ios-lists. "
//                      "This is go/material-ios-migrations#not-scriptable 🕘",
//                      ios(11, 12))

@class MDCCollectionInfoBarView;

@protocol MDCCollectionInfoBarViewDelegate;

/** The info bar supplementary view kind when shown in header. */
extern NSString *_Nonnull const MDCCollectionInfoBarKindHeader;

/** The info bar supplementary view kind when shown in footer. */
extern NSString *_Nonnull const MDCCollectionInfoBarKindFooter;

/** The animation duration for the info bar. */
extern const CGFloat MDCCollectionInfoBarAnimationDuration;

/** Height for the info bar when shown in header. */
extern const CGFloat MDCCollectionInfoBarHeaderHeight;

/** Height for the info bar when shown in footer. */
extern const CGFloat MDCCollectionInfoBarFooterHeight;

/** The available styles that the info bar can be shown within a collectionView. */
typedef NS_ENUM(NSUInteger, MDCCollectionInfoBarViewStyle) {
  MDCCollectionInfoBarViewStyleActionable,
  MDCCollectionInfoBarViewStyleHUD
};

/** Delegate protocol for the MDCCollectionInfoBarView. */

/**
 The MDCCollectionInfoBarView class provides an implementation of
 UICollectionReusableView that displays an animated view in either the header
 or footer.
 */
@interface MDCCollectionInfoBarView : UICollectionReusableView

/** A delegate through which the MDCCollectionInfoBarView may inform of updates. */
@property(nonatomic, weak, nullable) id<MDCCollectionInfoBarViewDelegate> delegate;

/** The background view containing the message label. This view is animatable on show/dismiss. */
@property(nonatomic, readonly, strong, nullable) UIView *backgroundView;

/** Whether the background view should be shown with a shadow. */
@property(nonatomic, assign) BOOL shouldApplyBackgroundViewShadow;

/**
 The color assigned to the background view.

 Defaults to #448AFF for header, and white for footer.
 */
@property(nonatomic, strong, null_resettable) UIColor *tintColor;

/**
 The color assigned to the info bar message label.

 Defaults to white for header, and #F44336 for footer.
 */
@property(nonatomic, strong, nullable) UIColor *titleColor;

/** The info bar message label. */
@property(nonatomic, readonly, strong, nullable) UILabel *titleLabel;

/** The info bar message text. */
@property(nonatomic, strong, nullable) NSString *message;

/** The horizontal position of bar message. */
@property(nonatomic, assign) NSTextAlignment textAlignment;

/** Whether the background view can receive a tap gesture. */
@property(nonatomic, assign) BOOL allowsTap;

/** The optional style that the info bar can be shown. */
@property(nonatomic, assign) MDCCollectionInfoBarViewStyle style;

/**
 The info bar supplementary view kind as set by the collectionView model
 |collectionView:viewForSupplementaryElementOfKind:atIndexPath| method. Possible values
 are MDCCollectionInfoBarKindHeader or MDCCollectionInfoBarKindFooter.
 */
@property(nonatomic, strong, nonnull) NSString *kind;

/**
 The desired duration after which the info bar will be automatically dismissed. If set to
 0, autoDismiss will be ignored.
 */
@property(nonatomic, assign) NSTimeInterval autoDismissAfterDuration;

/** Whether the info bar is currently being shown. */
@property(nonatomic, readonly, assign) BOOL isVisible;

/**
 Shows the info bar with/without animation.

 @param animated YES the transition will be animated; otherwise, NO.
 */
- (void)showAnimated:(BOOL)animated;

/**
 Dismisses the info bar with/without animation.

 @param animated YES the transition will be animated; otherwise, NO.
 */
- (void)dismissAnimated:(BOOL)animated;

@end

//API_DEPRECATED_END
