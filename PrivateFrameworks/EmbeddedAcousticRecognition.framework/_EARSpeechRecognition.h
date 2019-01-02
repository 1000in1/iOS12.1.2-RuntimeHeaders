/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARSpeechRecognition : NSObject <NSCopying> {
    NSArray * _interpretationIndices;
    NSArray * _tokenSausage;
}

@property (nonatomic, readonly, copy) NSArray *interpretationIndices;
@property (nonatomic, readonly, copy) NSArray *tokenSausage;

- (void).cxx_destruct;
- (id)_initWithNBestList:(const struct vector<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> >, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > > { struct vector<quasar::Token, std::__1::allocator<quasar::Token> > {} *x1; struct vector<quasar::Token, std::__1::allocator<quasar::Token> > {} *x2; struct __compressed_pair<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > *, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > > { struct vector<quasar::Token, std::__1::allocator<quasar::Token> > {} *x_3_1_1; } x3; }*)arg1;
- (id)_initWithTokenSausage:(id)arg1 interpretationIndices:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)interpretationIndices;
- (id)nBest;
- (id)oneBest;
- (id)tokenSausage;

@end