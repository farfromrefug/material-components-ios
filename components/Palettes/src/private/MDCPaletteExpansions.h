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

// API_DEPRECATED_BEGIN("🤖👀 Use go/material-ios-branding APIs instead. "
//                      "See go/material-ios-tokens guidance for more details. "
//                      "This has go/material-ios-migrations#scriptable-potential 🤖👀",
//                      ios(12, 12))

UIColor* _Nonnull MDCPaletteTintFromTargetColor(UIColor* _Nonnull targetColor,
                                                NSString* _Nonnull tintName);

UIColor* _Nonnull MDCPaletteAccentFromTargetColor(UIColor* _Nonnull targetColor,
                                                  NSString* _Nonnull accentName);

//API_DEPRECATED_END
