/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKColorPalette, NSColor, NSString;

@interface GKTextStyle : NSObject
{
    double _UIKitFontLeading;
    BOOL _needsParagraphStyle;
    BOOL _overrideUIKitFontSize;
    GKColorPalette *_palette;
    NSString *_fontName;
    NSString *_UIKitFontTextStyleName;
    double _fontSize;
    NSColor *_color;
    unsigned long long _textAlignment;
    unsigned long long _lineBreakMode;
    double _minimumLineHeight;
    double _m34;
    double _zPosition;
    SEL _fontSizeRebaseSelector;
    SEL _fontNameRebaseSelector;
}

+ (double)scaledValueFromHISpecLeading:(double)arg1 forFontTextStyle:(id)arg2;
+ (double)standardLeadingForFontTextStyle:(id)arg1;
+ (double)bubbleTextScale;
+ (double)standardFontSize;
+ (id)attributedString:(id)arg1 byReplayingFromBaseStyle:(id)arg2;
+ (id)textStyle;
@property(nonatomic) SEL fontNameRebaseSelector; // @synthesize fontNameRebaseSelector=_fontNameRebaseSelector;
@property(nonatomic) SEL fontSizeRebaseSelector; // @synthesize fontSizeRebaseSelector=_fontSizeRebaseSelector;
@property(nonatomic) BOOL overrideUIKitFontSize; // @synthesize overrideUIKitFontSize=_overrideUIKitFontSize;
@property(nonatomic) BOOL needsParagraphStyle; // @synthesize needsParagraphStyle=_needsParagraphStyle;
@property(nonatomic) double zPosition; // @synthesize zPosition=_zPosition;
@property(nonatomic) double m34; // @synthesize m34=_m34;
@property(nonatomic) double minimumLineHeight; // @synthesize minimumLineHeight=_minimumLineHeight;
@property(nonatomic) unsigned long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) NSString *UIKitFontTextStyleName; // @synthesize UIKitFontTextStyleName=_UIKitFontTextStyleName;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(retain, nonatomic) GKColorPalette *palette; // @synthesize palette=_palette;
- (id)styleWithName:(id)arg1 fallback:(id)arg2 layoutMode:(int)arg3;
- (id)bubbleTextSmall;
- (id)bubbleText;
- (id)settingsFooter;
- (id)settingsHeader;
- (id)settingsLabel;
- (id)settingsBoldButton;
- (id)settingsButton;
- (id)settingsLinkText;
- (id)remoteUINickNameLabel:(int)arg1;
- (id)remoteUINickNameField:(int)arg1;
- (id)remoteUISelectField:(int)arg1;
- (id)remoteUISelectLabel:(int)arg1;
- (id)remoteUIEditLabel:(int)arg1;
- (id)remoteUIEditField:(int)arg1;
- (id)remoteUITableHeaderButton:(int)arg1;
- (id)remoteUITableFooterButton:(int)arg1;
- (id)remoteUITableHeaderSubLabel:(int)arg1;
- (id)remoteUITableHeaderLabel:(int)arg1;
- (id)remoteUIDetailLabel:(int)arg1;
- (id)remoteUILabel:(int)arg1;
- (id)remoteUISectionFooter:(int)arg1;
- (id)remoteUISectionHeader:(int)arg1;
- (id)lineHeight:(double)arg1;
- (id)lineBreakMode:(unsigned long long)arg1;
- (id)alignment:(unsigned long long)arg1 lineBreakMode:(unsigned long long)arg2;
- (id)removeButtonTitle;
- (id)tabIconCaption;
- (id)tableFooterStyle;
- (id)tableCellSubtitle;
- (id)tableCellTitle;
- (id)buttonTitle;
- (id)cellActionItem;
- (id)sectionCaptionSmall;
- (id)sectionCaption;
- (id)sectionHeader;
- (id)achievementValueText;
- (id)achievementLeaderboardPointsText;
- (id)achievementLeaderboardRank;
- (id)leaderboardRankLarge;
- (id)leaderboardRankMedium;
- (id)leaderboardRankSmall;
- (id)signInLink;
- (id)signInFieldLabel;
- (id)signInField;
- (id)signInSubtitle;
- (id)signInTitle;
- (id)bubbleHeadline;
- (id)challengeBubbleValue;
- (id)meBubbleValue;
- (id)meBubbleCaption;
- (id)segmentBubbleValue;
- (id)segmentBubbleCaption;
- (id)bubbleValue;
- (id)bubbleCaption;
- (id)bubbleValueSmall;
- (id)bubbleCaptionSmall;
- (id)detailSecondaryHeaderText;
- (id)gameDetailNameText;
- (id)thinNumberText;
- (id)multiplayerFooterText;
- (id)multiplayerHeaderText;
- (id)multiplayerStatusText;
- (id)multiplayerAddText;
- (id)multiplayerNameText;
- (id)headerViewSubText1;
- (id)composeMessage;
- (id)composeFields;
- (id)centered;
- (id)medium;
- (id)light;
- (id)regular;
- (id)thin;
- (id)strong;
- (id)bold;
- (id)friendCaptionColor;
- (id)friendColor;
- (id)localPlayerColor;
- (id)scaled:(double)arg1;
- (id)scaledForM34:(double)arg1 zPosition:(double)arg2;
- (void)applyScaleForMesh;
- (id)emphasizedOnDarkBackground;
- (id)emphasized;
- (id)viewBackground;
- (id)smallInfo;
- (id)info;
- (id)small;
- (id)selectedBuyButtonTitle;
- (id)buyButtonTitle;
- (id)roundButtonTitle;
- (id)caption;
- (id)bannerMessage;
- (id)bannerTitle;
- (id)caption2;
- (id)caption1;
- (id)footnote;
- (id)body;
- (id)headline;
- (id)header4;
- (id)header3;
- (id)header2;
- (id)header1;
- (id)header0;
- (id)baseFontRebaseSelector;
- (void)applyToEditField:(id)arg1;
- (void)applyToLabel:(id)arg1;
- (id)attributes;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 leadingOverrideFromHISpec:(double)arg3 shouldOverrideSize:(BOOL)arg4 rebaseSelector:(SEL)arg5;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 shouldOverrideSize:(BOOL)arg3 rebaseSelector:(SEL)arg4;
- (void)setFontName:(id)arg1 rebaseSelector:(SEL)arg2;
- (void)setFontSize:(double)arg1 rebaseSelector:(SEL)arg2;
- (id)resolveFontAndLineSpacing:(double *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithBaseClass:(Class)arg1;
- (id)copy;
- (id)replayOnBaseStyle:(id)arg1;
- (id)initEmpty;
- (id)init;

@end
