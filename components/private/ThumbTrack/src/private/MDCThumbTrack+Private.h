// Copyright 2018-present the Material Components for iOS authors. All Rights Reserved.
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

#import "MDCThumbTrack.h"

#import "MaterialInk.h"
#import "MDCNumericValueLabel.h"
#import "MDCDiscreteDotView.h"

// API_DEPRECATED_BEGIN("🤖👀 Use go/material-ios-branding UISlider instead. "
//                      "See go/material-ios-slider/gm2-migration for more details. "
//                      "This has go/material-ios-migrations#scriptable-potential 🤖👀.",
//                      ios(12, 12))

@interface MDCThumbTrack (Private)

@property(nonatomic, nonnull, readonly) MDCNumericValueLabel *numericValueLabel;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
@property(nonatomic, nonnull, readonly) MDCInkTouchController *touchController;
#pragma clang diagnostic pop
@property(nonatomic, nonnull, readonly) MDCDiscreteDotView *discreteDotView;

@end

//API_DEPRECATED_END
