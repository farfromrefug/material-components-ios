// Copyright 2019-present the Material Components for iOS authors. All Rights Reserved.
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

#import "MDCTextControl.h"
#import "MDCTextControlStyleUnderlined.h"

// API_DEPRECATED_BEGIN(
//     "🕘 Schedule time to migrate. "
//     "Use branded UITextField or UITextView instead: go/material-ios-text-fields/gm2-migration. "
//     "This is go/material-ios-migrations#not-scriptable 🕘",
//     ios(12, 12))

/**
This style object is used by MDCTextControls adopting the Material Filled style.
*/
@interface MDCTextControlStyleFilled : MDCTextControlStyleUnderlined <MDCTextControlStyle>

/**
The corner radius of the top two corners.
*/
@property(nonatomic, assign) CGFloat topCornerRadius;

/**
Sets the filled background color color for a given state.
@param filledBackgroundColor The UIColor for the given state.
@param state The MDCTextControlState.
*/
- (void)setFilledBackgroundColor:(nonnull UIColor *)filledBackgroundColor
                        forState:(MDCTextControlState)state;

/**
Returns the filled background color for a given state.
@param state The MDCTextControlState.
*/
- (nonnull UIColor *)filledBackgroundColorForState:(MDCTextControlState)state;

@end

//API_DEPRECATED_END
