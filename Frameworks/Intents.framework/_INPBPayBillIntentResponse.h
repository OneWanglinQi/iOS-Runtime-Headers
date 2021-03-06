/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayBillIntentResponse : PBCodable <NSCopying> {
    _INPBBillDetailsValue * _billDetails;
    _INPBFinancialAccountValue * _fromAccount;
    _INPBPaymentAmountValue * _transactionAmount;
    _INPBString * _transactionNote;
    _INPBDateTimeRange * _transactionScheduledDate;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBBillDetailsValue *billDetails;
@property (nonatomic, retain) _INPBFinancialAccountValue *fromAccount;
@property (nonatomic, readonly) bool hasBillDetails;
@property (nonatomic, readonly) bool hasFromAccount;
@property (nonatomic, readonly) bool hasTransactionAmount;
@property (nonatomic, readonly) bool hasTransactionNote;
@property (nonatomic, readonly) bool hasTransactionScheduledDate;
@property (nonatomic, retain) _INPBPaymentAmountValue *transactionAmount;
@property (nonatomic, retain) _INPBString *transactionNote;
@property (nonatomic, retain) _INPBDateTimeRange *transactionScheduledDate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)billDetails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fromAccount;
- (bool)hasBillDetails;
- (bool)hasFromAccount;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBillDetails:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
