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

// API_DEPRECATED_BEGIN("🕘 Schedule time to migrate. "
//                      "Use branded UITableView or UICollectionView instead: go/material-ios-lists. "
//                      "This is go/material-ios-migrations#not-scriptable 🕘",
//                      ios(11, 12))

/**
 The MDCCollectionGridBackgroundView class provides an implementation of UICollectionReusableView
 that displays a background view under cells at each section of a collection view in grid layout.

 This will only happen for a grid layout when it is either A) grouped-style or B) card-style with
 zero padding. When this happens, the background for the section cells will not be drawn, and
 instead this view will extend to the bounds of the sum of its respective section item frames.
 */
@interface MDCCollectionGridBackgroundView : UICollectionReusableView

@end

//API_DEPRECATED_END
