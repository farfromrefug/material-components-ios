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

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MDCTextControl.h"

#import "MDCTextControlAssistiveLabelViewLayout.h"

// API_DEPRECATED_BEGIN(
//     "🕘 Schedule time to migrate. "
//     "Use branded UITextField or UITextView instead: go/material-ios-text-fields/gm2-migration. "
//     "This is go/material-ios-migrations#not-scriptable 🕘",
//     ios(12, 12))

/**
 This view acts as a subview of MDCTextControls and a superview of their leading and assistive
 labels.
 */
@interface MDCTextControlAssistiveLabelView : UIView

@property(nonatomic, strong, readonly, nonnull) UILabel *leadingAssistiveLabel;
@property(nonatomic, strong, readonly, nonnull) UILabel *trailingAssistiveLabel;
@property(nonatomic, strong, nonnull) MDCTextControlAssistiveLabelViewLayout *layout;

@end

//API_DEPRECATED_END
