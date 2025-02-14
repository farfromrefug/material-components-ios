// Copyright 2017-present the Material Components for iOS authors. All Rights Reserved.
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

#import "MDCTabBarIndicatorTemplate.h"

// API_DEPRECATED_BEGIN("🤖👀 Use a branded MDCTabBarView instead. "
//                      "See go/material-ios-tabs and go/material-ios-tabbar-migration for more info. "
//                      "This has go/material-ios-migrations#scriptable-potential 🤖👀.",
//                      ios(12, 12))

/*
 Default indicator template which produces a fixed-height solid line underneath the selected tab.
 */
@interface MDCTabBarUnderlineIndicatorTemplate : NSObject <MDCTabBarIndicatorTemplate>
@end

//API_DEPRECATED_END
