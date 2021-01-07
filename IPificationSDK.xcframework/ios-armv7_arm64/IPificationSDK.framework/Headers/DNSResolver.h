
#import <Foundation/Foundation.h>

extern NSString *const DNSResolverErrorDomain;


@interface DNSResolver : NSObject

/**
 * The delegate & delegateQueue are mandatory.
 * The resolverQueue is optional. If NULL, it will automatically create it's own internal queue.
**/
- (id)initWithDelegate:(id)aDelegate delegateQueue:(dispatch_queue_t)dq resolverQueue:(dispatch_queue_t)rq;

@property (strong, readonly) NSString *srvName;
@property (readonly) NSTimeInterval timeout;

- (void)dnsQueryRecord:(NSString *)aName  withType:(NSInteger)type timeout:(NSTimeInterval)aTimeout;
- (void)stop;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol DNSResolverDelegate

- (void)DNSResolver:(DNSResolver *)sender didResolveRecords:(NSArray *)records;
- (void)DNSResolver:(DNSResolver *)sender didNotResolveDueToError:(NSError *)error;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@interface DNSRecord : NSObject
{
    NSString *target;
    
}

+ (DNSRecord *)createRecord:(NSString *)target;

@property (nonatomic, readonly) NSString *target;

@end
