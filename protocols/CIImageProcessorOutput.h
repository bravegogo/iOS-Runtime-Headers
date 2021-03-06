/* Generated by RuntimeBrowser.
 */

@protocol CIImageProcessorOutput

@required

- (void*)baseAddress;
- (unsigned long)bytesPerRow;
- (int)format;
- (<MTLCommandBuffer> *)metalCommandBuffer;
- (<MTLTexture> *)metalTexture;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })region;

@end
