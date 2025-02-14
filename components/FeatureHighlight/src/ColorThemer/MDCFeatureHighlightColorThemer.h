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

#import "MaterialFeatureHighlight.h"
#import "MaterialThemes.h"

// API_DEPRECATED_BEGIN("🕘 Schedule time to migrate. "
//                      "Consider using a modal sheet to explain new features instead. "
//                      "This is go/material-ios-migrations#not-scriptable 🕘",
//                      ios(12, 12))

/**
 The Material Design color system's themer for instances of MDCFeatureHighlightViewController.

 @warning This API will eventually be deprecated. See the individual method documentation for
 details on replacement APIs.
 Learn more at docs/theming.md#migration-guide-themers-to-theming-extensions
 */
@interface MDCFeatureHighlightColorThemer : NSObject
@end

@interface MDCFeatureHighlightColorThemer (Deprecated)

/**
 Applies a color scheme's properties to an MDCFeatureHighlightViewController.

 @param colorScheme The color scheme to apply to the component instance.
 @param featureHighlightViewController A component instance to which the color scheme should be
 applied.

 @warning This API will eventually be deprecated. There is no replacement yet.
 Track progress here: https://github.com/material-components/material-components-ios/issues/7172
 Learn more at docs/theming.md#migration-guide-themers-to-theming-extensions
 */
+ (void)applySemanticColorScheme:(nonnull id<MDCColorScheming>)colorScheme
    toFeatureHighlightViewController:
        (nonnull MDCFeatureHighlightViewController *)featureHighlightViewController
    __deprecated_msg("Customize your MDCFeatureHighlight using its styling APIs directly.");

/**
 Applies a color scheme to theme to a MDCFeatureHighlightView.

 @param colorScheme The color scheme to apply to MDCFeatureHighlightView.
 @param featureHighlightView A MDCFeatureHighlightView instance to apply a color scheme.

 @warning This API will eventually be deprecated. There is no replacement yet.
 Track progress here: https://github.com/material-components/material-components-ios/issues/7172
 Learn more at docs/theming.md#migration-guide-themers-to-theming-extensions
 */
+ (void)applyColorScheme:(nonnull id<MDCColorScheme>)colorScheme
    toFeatureHighlightView:(nonnull MDCFeatureHighlightView *)featureHighlightView
    __deprecated_msg("Customize your MDCFeatureHighlight using its styling APIs directly.");

@end

//API_DEPRECATED_END
