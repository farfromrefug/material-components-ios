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
//                      "Consider using a modal sheet to explain new features instead. "
//                      "This is go/material-ios-migrations#not-scriptable 🕘",
//                      ios(12, 12))

typedef enum : NSUInteger {
  MDCFeatureHighlightDismissAccepted,
  MDCFeatureHighlightDismissRejected,
} MDCFeatureHighlightDismissStyle;

@interface MDCFeatureHighlightAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property(nonatomic, assign) MDCFeatureHighlightDismissStyle dismissStyle;
@property(nonatomic, assign, getter=isPresenting) BOOL presenting;

@end

//API_DEPRECATED_END
