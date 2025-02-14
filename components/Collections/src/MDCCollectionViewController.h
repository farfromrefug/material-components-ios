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

#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

#import "MDCCollectionViewEditingDelegate.h"
#import "MDCCollectionViewStylingDelegate.h"  // IWYU pragma: keep

// API_DEPRECATED_BEGIN("🕘 Schedule time to migrate. "
//                      "Use branded UITableView or UICollectionView instead: go/material-ios-lists. "
//                      "This is go/material-ios-migrations#not-scriptable 🕘",
//                      ios(11, 12))

@protocol MDCCollectionViewEditing;
@protocol MDCCollectionViewStyling;

/**
 Controller that implements a collection view that adheres to Material Design layout
 and animation styling.
 */
@interface MDCCollectionViewController : UICollectionViewController <
                                             /** Allows for editing notifications/permissions. */
                                             MDCCollectionViewEditingDelegate,

                                             /** Allows for styling updates. */
                                             MDCCollectionViewStylingDelegate,

                                             /** Adheres to flow layout. */
                                             UICollectionViewDelegateFlowLayout>

/** The collection view styler. */
@property(nonatomic, strong, readonly, nonnull) id<MDCCollectionViewStyling> styler;

/** The collection view editor. */
@property(nonatomic, strong, readonly, nonnull) id<MDCCollectionViewEditing> editor;

/**
 This property determines if an @c MDCCollectionViewController should use the @c MDCInkView behavior
 or not.

 By setting this property to @c YES, @c MDCRippleView is used to provide the user visual
 touch feedback, instead of the legacy @c MDCInkView.

 @note Defaults to @c NO.
 */
@property(nonatomic, assign) BOOL enableRippleBehavior;

#pragma mark - Subclassing

/**
 The following methods require a call to super in their overriding implementations to allow
 this collection view controller to properly configure the collection view when in editing mode
 as well as ink during the highlight/unhighlight states.
 */

- (void)collectionView:(nonnull UICollectionView *)collectionView
    didHighlightItemAtIndexPath:(nonnull NSIndexPath *)indexPath NS_REQUIRES_SUPER;

- (void)collectionView:(nonnull UICollectionView *)collectionView
    didUnhighlightItemAtIndexPath:(nonnull NSIndexPath *)indexPath NS_REQUIRES_SUPER;

- (void)collectionView:(nonnull UICollectionView *)collectionView
    didSelectItemAtIndexPath:(nonnull NSIndexPath *)indexPath NS_REQUIRES_SUPER;

- (void)collectionView:(nonnull UICollectionView *)collectionView
    didDeselectItemAtIndexPath:(nonnull NSIndexPath *)indexPath NS_REQUIRES_SUPER;

- (void)collectionViewWillBeginEditing:(nonnull UICollectionView *)collectionView NS_REQUIRES_SUPER;

- (void)collectionViewWillEndEditing:(nonnull UICollectionView *)collectionView NS_REQUIRES_SUPER;

/**
 * Exposes cell width calculation for subclasses to use when calculating dynamic cell height. Note
 * that this method is only exposed temporarily until self-sizing cells are supported.
 */
- (CGFloat)cellWidthAtSectionIndex:(NSInteger)section;

@end

//API_DEPRECATED_END
