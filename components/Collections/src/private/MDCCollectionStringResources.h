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

#import <Foundation/Foundation.h>

// API_DEPRECATED_BEGIN("🕘 Schedule time to migrate. "
//                      "Use branded UITableView or UICollectionView instead: go/material-ios-lists. "
//                      "This is go/material-ios-migrations#not-scriptable 🕘",
//                      ios(11, 12))

/**
 Shorthand for returning a resource from MDCCollectionStringResources's singleton.
 */
#define MDCCollectionStringResources(sel) [[MDCCollectionStringResources sharedInstance] sel]

/** String resources that are used for collection views. */
@interface MDCCollectionStringResources : NSObject

/** Returns the shared resources singleton instance. */
+ (nonnull instancetype)sharedInstance;

/** Returns cell delete string. */
- (nonnull NSString *)deleteButtonString;

/** Returns cell gesture hint string. */
- (nonnull NSString *)infoBarGestureHintString;

@end

//API_DEPRECATED_END
