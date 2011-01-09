/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class MFGraphicsDevice;



@interface EMFPlayer : NSObject 
{
    MFGraphicsDevice *m_gdi;
    BOOL m_headerDone;
}

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInLogicalUnits:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInPoints:(id)arg1;

- (id)initWithGraphicsDevice:(id)arg1;
- (void)dealloc;
- (NSInteger)play:(NSUInteger)arg1 :(const char *)arg2;
- (void)done;
- (NSInteger)playHeader:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playUnknown:(NSUInteger)arg1 :(NSUInteger)arg2 :(const char *)arg3;
- (NSInteger)playUnsupported:(NSUInteger)arg1 :(const char *)arg2 :(const char *)arg3;
- (NSInteger)playSetWindowExt:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetWindowOrg:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playScaleWindowExt:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetWorldTransform:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playModifyWorldTransform:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetViewportExt:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetViewportOrg:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playScaleViewportExt:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSelectPalette:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSelectObject:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playDeleteObject:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playCreatePen:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playExtCreatePen:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playCreatePalette:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetPaletteEntries:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playResizePalette:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playRealizePalette:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playExtCreateFontIndirectW:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playCreateBrushIndirect:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playCreateMonoBrush:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playCreateDibPatternBrushPT:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playExtTextOut:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3;
- (NSInteger)playExtTextOutA:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playExtTextOutW:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetTextAlign:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetTextColour:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetTextJustification:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetBkColour:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetBkMode:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetBrushOrg:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetMapMode:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playPolyDraw:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3;
- (NSInteger)playPolyBezier:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3;
- (NSInteger)playPolyBezierTo:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3;
- (NSInteger)playPolygon:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3;
- (NSInteger)playPolyLine:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3;
- (NSInteger)playPolyLineTo:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3;
- (NSInteger)playRoundRect:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetStretchBltMode:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSaveDC:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playRestoreDC:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playLineTo:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playMoveToEx:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetArcDirection:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playArc:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playArcTo:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playChord:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playPie:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playEllipse:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playRectangle:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playPolyPolygon:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3;
- (NSInteger)playPolyPolyLine:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3;
- (NSInteger)playAngleArc:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3;
- (NSInteger)playBitBlt:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playStretchBlt:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playMaskBlt:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playPlgBlt:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetDIBitsToDevice:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playStretchDIBits:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetPolyFillMode:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetMiterLimit:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetRop2:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playBeginPath:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playAbortPath:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playEndPath:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playWidenPath:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playCloseFigure:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playStrokeAndFillPath:(NSUInteger)arg1 :(const char *)arg2 :(BOOL)arg3 :(BOOL)arg4;
- (NSInteger)playSelectClipPath:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSelectClipRegion:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playFillRgn:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playPaintRgn:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playInvertRgn:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playExcludeClipRect:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playIntersectClipRect:(NSUInteger)arg1 :(const char *)arg2;
- (NSInteger)playSetMetaRgn:(NSUInteger)arg1 :(const char *)arg2;

@end