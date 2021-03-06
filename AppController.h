//
//  AppController.h
//  Endpointr
//
//  Copyright 2007, 2008 Jon Crosby. All rights reserved.
//  Created 11/10/07.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.


#import <Cocoa/Cocoa.h>
#import <OAuthConsumer/OAuthConsumer.h>


@interface AppController : NSObject {
    IBOutlet NSTextField *requestTokenURL;
    IBOutlet NSPopUpButton *requestTokenMethod;
    IBOutlet NSPopUpButton *requestTokenSignatureMethod;
    IBOutlet NSTextField *authorizationURL;
    IBOutlet NSTextField *accessTokenURL;
    IBOutlet NSPopUpButton *accessTokenMethod;
    IBOutlet NSPopUpButton *accessTokenSignatureMethod;
    IBOutlet NSTextField *protectedResourceURL;
    IBOutlet NSPopUpButton *protectedResourceMethod;
    IBOutlet NSPopUpButton *protectedResourceSignatureMethod;
    
    IBOutlet NSTextField *consumerKey;
    IBOutlet NSTextField *consumerSecret;
    IBOutlet NSTextField *tokenKey;
    IBOutlet NSTextField *tokenSecret;
    
    IBOutlet NSTextView *signatureBaseString;
    IBOutlet NSTextView *header;
    IBOutlet NSTextView *response;
}

- (IBAction)getRequestTokenClicked:(id)sender;
- (IBAction)openAuthorizationURLClicked:(id)sender;
- (IBAction)getAccessTokenClicked:(id)sender;
- (IBAction)accessProtectedResourceClicked:(id)sender;

@end
