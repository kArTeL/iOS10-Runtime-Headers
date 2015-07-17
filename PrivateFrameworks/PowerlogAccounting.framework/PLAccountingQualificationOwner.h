/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingQualificationOwner : PLAccountingOwner {
    PLAccountingEnergyEstimateEventEntry * _energyEstimate;
}

@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;
@property <PLAccountingQualificationOwnerManager> *manager;

- (void).cxx_destruct;
- (id)ID;
- (id)activationDate;
- (id)energyEstimate;
- (id)initWithEnergyEstimate:(id)arg1;
- (void)qualify;
- (id)range;
- (void)run;
- (void)setEnergyEstimate:(id)arg1;
- (void)setRunDate:(id)arg1;

@end