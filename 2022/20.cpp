#include <iostream>
#include <list>
#include <vector>

//#define TEST
//#define DEBUG

const std::list<int64_t> input =
{
#ifdef TEST
1
,2
,-3
,3
,-2
,0
,4
#else
-9941
,380
,-857
,-6435
,-8149
,-9197
,-8867
,-6704
,4356
,-7033
,-2952
,4743
,25
,1546
,5787
,4312
,-1052
,-2138
,-4792
,-9944
,-8235
,9531
,-5498
,7801
,5995
,2243
,-9597
,5114
,-1204
,7591
,5060
,4374
,-9970
,-8877
,1351
,-8540
,-4696
,3247
,9509
,-3500
,8984
,-8213
,-8576
,-8593
,4232
,-9130
,-7942
,-5448
,-4483
,6824
,-8149
,7927
,5137
,-3071
,-1800
,7218
,6093
,3888
,-959
,6605
,2636
,8427
,3616
,1166
,-7260
,-4317
,-4432
,-5042
,-9310
,-7319
,3873
,-2967
,5230
,-5440
,-6398
,-2720
,9669
,9619
,-7853
,-2953
,-6023
,8389
,1978
,621
,-7864
,9950
,4181
,7181
,409
,6730
,6932
,9950
,-3790
,-6288
,-6414
,9008
,-1309
,-9311
,-6470
,-3680
,4033
,-9886
,-9065
,2347
,4148
,-4934
,-7260
,3974
,-3062
,9548
,-9339
,-1614
,6506
,-2014
,2731
,-7691
,-2468
,-1756
,-4168
,9489
,-2315
,-830
,-1586
,-2807
,8057
,-5951
,8228
,-2558
,9027
,-156
,-830
,2949
,-5326
,4606
,-9846
,-6804
,-7627
,-4053
,-5449
,1538
,-7278
,5922
,9919
,8690
,561
,-7567
,-2731
,-3511
,-922
,-9919
,-2383
,8113
,-9065
,-5295
,-8191
,1814
,6026
,5597
,-3284
,8914
,3657
,-2765
,-7515
,-2828
,7152
,7046
,1364
,4519
,3247
,-4565
,-5025
,6981
,-5907
,6852
,-6170
,-2896
,-3600
,4362
,5442
,5781
,6925
,-2312
,-7154
,838
,1141
,150
,1581
,-4228
,4397
,-6414
,4452
,-6737
,-4420
,-8464
,1395
,4025
,3346
,6285
,1467
,2738
,6349
,2481
,5211
,7144
,2018
,-1069
,9136
,2878
,2766
,-8883
,9643
,9919
,-6324
,2376
,-2906
,-9776
,-881
,-3117
,3101
,258
,1766
,9325
,-3991
,1322
,-3451
,-9032
,1854
,9607
,3051
,3187
,5704
,2906
,9438
,-5895
,-2794
,-4569
,2678
,3612
,-5521
,-9029
,320
,-4032
,348
,-3267
,1618
,4055
,9192
,4301
,9116
,1290
,2035
,-5473
,2537
,4176
,1211
,4003
,-1563
,6660
,1686
,1262
,-2590
,-9280
,4235
,4776
,4349
,-950
,2
,9205
,-286
,-815
,-2989
,-4683
,7701
,-8600
,5912
,7152
,-1506
,-9808
,9131
,-2136
,9941
,2381
,7102
,7833
,-5221
,9537
,7290
,2548
,4330
,8805
,6865
,-4679
,-8335
,9314
,1293
,-2860
,6399
,4759
,2583
,-9403
,-3694
,5166
,8618
,5168
,-7748
,-9793
,6224
,6931
,6781
,-2177
,1691
,-4096
,-9476
,1336
,-4075
,-2004
,-3658
,-5829
,-2382
,-5151
,8942
,-3110
,3850
,-2034
,-1197
,7931
,8139
,3245
,-9410
,-6420
,-6191
,6562
,9600
,4092
,807
,-1254
,4487
,6001
,-3156
,45
,321
,9884
,9988
,-8891
,901
,-709
,8518
,3331
,6636
,5639
,1774
,2374
,-3071
,-6513
,3752
,816
,9913
,6007
,-7974
,5659
,-2722
,-4460
,2985
,-4736
,3244
,-1657
,2293
,-4422
,-2142
,-6797
,-7634
,1469
,-5300
,3409
,7788
,-4788
,-4006
,1558
,-4385
,832
,8820
,9446
,-1241
,8913
,6938
,2023
,6389
,-4478
,-2714
,-4079
,5995
,9496
,3488
,3309
,-8840
,7091
,1558
,7157
,-4329
,8339
,2810
,-4064
,2082
,-4018
,7527
,4203
,6637
,1667
,-5951
,-7985
,530
,-5538
,-8915
,6525
,-3509
,6705
,-9032
,5606
,919
,-5647
,-4887
,-9881
,4528
,7126
,3409
,-7628
,5166
,-18
,-4085
,-1293
,6909
,1538
,5721
,7055
,2906
,8681
,4556
,-7704
,2071
,9960
,-8024
,-178
,-3224
,1675
,5668
,7245
,-8219
,-2343
,1488
,7807
,8803
,-2525
,272
,-2818
,779
,9613
,-9848
,7024
,-2955
,991
,-1212
,7914
,-763
,-8014
,-5272
,-8093
,1495
,6893
,320
,-3004
,5290
,9718
,6075
,-6663
,4149
,-1059
,-1459
,-6006
,2726
,-9447
,8443
,-760
,-3254
,-8527
,2383
,101
,-7889
,5376
,-9444
,7794
,1604
,-9260
,-7438
,9578
,4393
,6759
,-8644
,8331
,9917
,-1896
,8800
,-5816
,7944
,5151
,-1296
,-6561
,-8599
,-6287
,8625
,9211
,-1974
,-386
,-4315
,1521
,-4376
,6535
,6018
,-7092
,-8105
,304
,7627
,2575
,-8335
,-4887
,1476
,7744
,-1484
,7055
,-146
,-8787
,-3243
,-5822
,-4541
,7953
,7082
,-1340
,8263
,-5021
,5889
,-8681
,5724
,6227
,-5295
,-3321
,-7787
,-5293
,2268
,-3511
,5824
,-5349
,-4921
,4607
,-5695
,1590
,-5153
,-4530
,6741
,-8144
,-4405
,3582
,635
,9177
,6477
,2530
,589
,-3035
,3694
,8331
,-5426
,4736
,1497
,-3712
,-4746
,-4318
,-6669
,-2596
,9183
,8272
,-8599
,8689
,-9918
,6413
,7801
,7513
,-1450
,5995
,9578
,5922
,-5553
,-7464
,777
,-8017
,9589
,7543
,-4000
,-8989
,-5573
,-5881
,5956
,7445
,5779
,895
,7109
,6989
,-5590
,4828
,9454
,-1694
,1941
,1583
,-2622
,-5759
,9669
,362
,7057
,6438
,6321
,-9463
,-1506
,-7927
,-9661
,9419
,-9940
,1667
,65
,-6619
,820
,-5933
,-7096
,9230
,291
,6093
,-9399
,2381
,3043
,-1508
,4181
,-82
,4199
,7591
,6817
,-1167
,-468
,4187
,9062
,3993
,-6063
,7153
,-8476
,-1011
,2114
,1286
,5975
,-8117
,7164
,1211
,-4303
,-8714
,4681
,-2150
,-2852
,5995
,-5538
,2402
,887
,-1376
,-4257
,2776
,6420
,2316
,-8454
,-288
,1845
,-9329
,-4718
,-6306
,-4950
,-9867
,2986
,3718
,4161
,-4160
,-7731
,7792
,-1467
,-1500
,-6475
,4694
,-4665
,1365
,5118
,5911
,5279
,6847
,5290
,3531
,5869
,-3491
,7957
,-8041
,-7587
,-7365
,9303
,-2886
,9653
,9106
,-9138
,5277
,-1807
,-7246
,8682
,1280
,2793
,2445
,5597
,7803
,3833
,-8651
,-2769
,-2714
,-2019
,-9810
,-7176
,748
,7121
,-5750
,-5473
,2672
,-4164
,-496
,3870
,-7121
,-2233
,-1378
,-1887
,-1870
,-7204
,4541
,-2208
,-9607
,521
,3414
,7585
,275
,-2765
,-6338
,4852
,-562
,1554
,2053
,8383
,2538
,-4738
,2138
,7250
,768
,5063
,1942
,-4403
,8690
,947
,-7942
,-1004
,4763
,-1937
,-4475
,-1398
,-425
,7056
,6519
,-7699
,8167
,-3027
,-4331
,-6140
,-9232
,-2442
,1636
,854
,407
,7527
,-4143
,-8572
,-1677
,-5676
,-6146
,8981
,-4559
,-4149
,4333
,5465
,6181
,-6098
,-8386
,-8854
,-7813
,-5028
,8715
,-626
,-9384
,-5704
,-8773
,9009
,2964
,4268
,-3727
,6270
,6212
,8549
,1793
,7797
,-3550
,461
,-8468
,-4120
,9117
,7082
,-234
,9068
,-5799
,9953
,-9669
,-1650
,-8498
,-7336
,-4303
,-459
,2431
,3550
,-476
,-4405
,-8617
,4574
,8055
,6013
,-4571
,3185
,-7511
,5993
,-8772
,892
,-119
,-4221
,-2883
,6549
,-4736
,-9728
,-3947
,-6758
,2874
,9649
,-3063
,-5025
,4096
,-9444
,-7202
,-1508
,-9901
,919
,-9535
,5414
,4190
,-5068
,915
,-748
,-5306
,-5463
,6819
,-2609
,-6604
,-6532
,-5994
,8389
,3843
,-5348
,-9247
,4286
,7046
,-8890
,-4930
,-1860
,-353
,1772
,3891
,3005
,5933
,8282
,-3037
,8139
,7678
,8752
,8407
,-726
,540
,2406
,1790
,3418
,-6323
,4830
,-694
,-7691
,-1697
,-6329
,-3835
,-4198
,919
,-2625
,2136
,607
,-1723
,5968
,-7353
,-6350
,2301
,2192
,6607
,-6124
,2877
,-7021
,-2795
,-1383
,-547
,5737
,-9455
,-875
,-7435
,9062
,2998
,-7110
,-710
,8084
,7086
,-8600
,-4633
,7384
,189
,8055
,-5204
,-3973
,3761
,-7223
,-3467
,7628
,5276
,-6168
,5580
,2588
,-3689
,-7673
,-2975
,-7557
,2680
,-1131
,885
,-9845
,-7097
,645
,-4869
,7101
,-3871
,-1150
,-7398
,8410
,4830
,-5291
,5798
,-6700
,9057
,9361
,-1222
,3338
,280
,-3477
,4668
,3700
,-9539
,-8549
,6209
,4411
,-8738
,1583
,1077
,8613
,6628
,-5055
,-5293
,-3267
,6737
,-7627
,1793
,132
,9077
,3913
,-8051
,8233
,-7988
,-6901
,206
,-4586
,-4404
,4243
,-7911
,-9821
,5820
,-1603
,-592
,-6711
,3403
,-5326
,-5726
,-8395
,-786
,7912
,3489
,-8918
,1900
,-7546
,-1542
,7502
,-7331
,6194
,9900
,-8957
,5076
,573
,-6460
,9745
,6770
,-4096
,-8586
,401
,-9592
,4785
,-1399
,2035
,-3371
,8912
,-2444
,3302
,-3908
,7805
,-3908
,-5277
,3583
,7486
,9055
,3431
,-2534
,-6443
,-292
,-515
,-2363
,2035
,3449
,-5243
,4159
,-9687
,8827
,8943
,5189
,-7909
,-815
,-5076
,6125
,8490
,-5674
,7058
,-7627
,1956
,-1620
,-7438
,2071
,-8463
,-6111
,314
,-252
,-3865
,-5164
,-1174
,3594
,749
,1862
,7518
,-1227
,-4963
,1168
,3861
,-9099
,-370
,8988
,630
,-4053
,385
,-8734
,7411
,9668
,-5972
,6422
,-1849
,9629
,2042
,-1257
,-3807
,2173
,3734
,-3451
,-2800
,-7118
,-5578
,9849
,-6667
,9060
,-5256
,8297
,-2022
,-8486
,-593
,9224
,-9379
,1951
,1364
,-604
,-4779
,9610
,-8436
,5889
,6809
,8729
,7132
,-5932
,-8415
,2296
,8192
,3830
,4894
,-2062
,1351
,3912
,-9775
,9124
,-7255
,-7379
,3685
,7783
,-9900
,-7931
,-6610
,8234
,7085
,-2445
,9949
,1623
,7830
,5588
,-4283
,1139
,-3370
,-2662
,-1582
,5222
,7262
,6943
,-6930
,4912
,3038
,6819
,-6641
,-8274
,8866
,4525
,5219
,2515
,8472
,-8137
,5271
,-6864
,-5028
,9654
,9705
,546
,3867
,-9499
,9667
,-7116
,5755
,-2585
,2511
,8192
,4854
,6719
,-5980
,-6470
,-963
,2113
,1583
,-1598
,-9074
,-169
,-9361
,7312
,1688
,-8708
,-9521
,-8191
,-8895
,9345
,6525
,-5671
,-7181
,6540
,-6050
,9606
,1844
,-7470
,2257
,4341
,8916
,6870
,-478
,6423
,-6041
,4299
,-4257
,9161
,778
,-3939
,-6050
,9280
,-3857
,2008
,7156
,-452
,-2929
,-5888
,-6715
,777
,5630
,-8865
,4994
,-7061
,-7423
,2581
,-6399
,3402
,-2390
,9953
,4653
,-6895
,4405
,-496
,-1853
,1211
,149
,-5695
,3405
,-7355
,7815
,-7730
,-8365
,-7212
,-1604
,-727
,-7066
,-1396
,-2231
,-7489
,-2836
,3020
,-1158
,1013
,9718
,9666
,-476
,4144
,4906
,7638
,-3156
,7384
,-2644
,-47
,-8020
,9059
,8233
,-5615
,-7267
,-6289
,-8403
,-866
,2236
,-3037
,8146
,9688
,-4199
,9661
,8559
,275
,4897
,7352
,-7864
,-2238
,924
,-9851
,8579
,6363
,2946
,4718
,975
,-8535
,4445
,-5057
,7812
,7629
,1841
,9861
,-6019
,860
,3409
,206
,-8152
,-2112
,-5695
,9251
,-4207
,-9633
,-9853
,7325
,-2648
,1709
,8630
,6535
,-7276
,-8651
,-8519
,-7988
,1419
,1604
,673
,7404
,-5818
,-5463
,2195
,7052
,-1598
,-1227
,7347
,8865
,6737
,3965
,4003
,3755
,6522
,-3160
,4930
,-9021
,-6398
,474
,1489
,-4526
,-721
,6128
,6335
,4542
,-9919
,1600
,-9444
,6009
,5867
,-8681
,-8456
,-7443
,6636
,6119
,3943
,-8774
,-5100
,5028
,-3110
,-7355
,-7980
,-7075
,-9403
,-3163
,4772
,1294
,-7139
,-4665
,1845
,5618
,-9830
,521
,-1167
,6590
,-4212
,9011
,-1293
,-24
,4486
,-4198
,3782
,-1327
,-6609
,-9065
,4759
,-2822
,8139
,2942
,-3909
,1018
,2503
,6363
,7542
,7839
,5995
,-7983
,-6093
,1942
,4019
,-720
,9095
,7667
,-1640
,8752
,4124
,-5814
,-1500
,-3944
,-8772
,4416
,-763
,-7867
,-36
,8768
,-3634
,-4852
,3817
,-1265
,9340
,969
,-5251
,2727
,-2593
,3547
,6990
,-1019
,7189
,-4535
,1905
,-4710
,5649
,3073
,1664
,-8869
,-3688
,-1414
,-6771
,-870
,-1230
,5344
,984
,-272
,-6226
,9589
,4053
,749
,-8024
,1289
,-4149
,-2051
,-2328
,-749
,6871
,7797
,-3159
,-7095
,3407
,5806
,-9384
,-57
,-1622
,-1760
,-3416
,-6443
,1599
,5406
,7805
,2866
,-571
,-409
,-1657
,-9800
,-2259
,-515
,9994
,1064
,112
,-3686
,-7724
,-3634
,-2004
,5768
,2506
,-9941
,4874
,-10000
,8580
,-1383
,8942
,2774
,9509
,-5951
,-2533
,-2361
,-169
,-8083
,-8884
,2092
,-3043
,8139
,-257
,258
,-5193
,6951
,8412
,1633
,-4015
,6092
,7724
,8565
,2025
,115
,5704
,-9919
,298
,-8178
,-2984
,7203
,9275
,-5608
,2164
,-2765
,2304
,7896
,-4336
,9015
,1280
,-3938
,-2558
,-4985
,-3430
,4407
,-4763
,5889
,-8603
,962
,4830
,5298
,192
,-5292
,-3364
,7055
,8189
,1845
,9993
,-1790
,-3034
,7126
,2466
,8084
,9361
,7803
,6812
,-4679
,-9762
,-7122
,1250
,-1224
,7849
,1777
,6396
,2631
,4747
,-4197
,895
,1476
,-8735
,-1665
,5015
,-6622
,-7851
,-6207
,-6266
,-7751
,5332
,-5219
,4991
,4162
,2593
,778
,-30
,-9830
,-5814
,-8995
,-3857
,6750
,579
,6870
,-5943
,-3334
,9960
,7135
,9756
,1013
,7026
,-9503
,-6597
,-2024
,1976
,-2310
,-1260
,3002
,-4597
,2200
,-1422
,-3550
,-8436
,6338
,8188
,-4365
,-4125
,1937
,3051
,-958
,4823
,-3514
,8103
,7540
,-6763
,-292
,-1277
,-8391
,-7954
,8598
,2826
,6579
,-9888
,-8844
,-3694
,-9260
,3497
,8358
,-8956
,9011
,8219
,-9670
,8613
,9622
,-2787
,-8490
,3172
,-2160
,-6215
,8669
,-8300
,-7999
,-9058
,4439
,2712
,8562
,2067
,5182
,1709
,-9831
,7259
,-5354
,4113
,6577
,-748
,-7627
,4229
,1743
,6011
,380
,-9660
,-2014
,2090
,-3912
,1886
,1279
,9267
,287
,-6457
,-9592
,-5463
,5826
,1150
,-764
,-4851
,8909
,-370
,-9472
,-5702
,-3657
,2627
,-1645
,-3611
,-9302
,8304
,-9819
,9767
,70
,-5562
,-6149
,-4934
,451
,7026
,2751
,8190
,8287
,1737
,-4516
,5652
,-515
,-9982
,-100
,-9567
,-1197
,6133
,-3478
,-9192
,-6105
,-1158
,-5193
,6969
,-2432
,-6693
,-9576
,6079
,-9774
,3774
,-3159
,-1150
,3876
,8971
,4268
,-5972
,9100
,4862
,-4267
,9403
,-2264
,-7801
,-8608
,2658
,6103
,-5463
,-9869
,-4612
,9059
,-6390
,8367
,6861
,-8995
,-2081
,-1779
,1549
,7457
,6326
,-6027
,3361
,1135
,3309
,8010
,4268
,371
,3767
,4618
,1645
,-7813
,1618
,-240
,7878
,2206
,2008
,-4067
,-5885
,-3207
,9475
,-6500
,-2043
,1245
,1077
,-4895
,-8518
,1332
,9104
,9531
,513
,-7346
,1942
,-1499
,-5195
,-850
,-7210
,5283
,8201
,442
,8000
,5956
,-3655
,307
,2464
,-2215
,8550
,-2412
,-9311
,7101
,4145
,7865
,-9380
,-6355
,5434
,-4115
,4232
,3017
,7312
,1456
,4312
,9179
,8988
,9206
,1287
,7377
,-7808
,9540
,2595
,9101
,-8722
,-292
,361
,675
,-96
,1056
,-7969
,4349
,8103
,-3700
,-4053
,-2737
,4953
,6058
,1959
,1623
,2211
,4577
,-6325
,1365
,7961
,8125
,1507
,6562
,9449
,6974
,2736
,-2906
,3582
,-3552
,-5153
,100
,-9399
,-5294
,1991
,3715
,4038
,8114
,-7622
,-2060
,8210
,3449
,4038
,-184
,3158
,-8359
,1667
,9364
,-8768
,8981
,5639
,-5053
,2608
,4101
,2588
,8828
,-3651
,9524
,-4053
,8055
,7502
,-5729
,-392
,8968
,4271
,5344
,-5134
,-6587
,-5407
,-478
,-5613
,-4654
,8558
,1604
,-1887
,-6155
,876
,6710
,-1216
,-621
,7468
,-3218
,1117
,3203
,4807
,4700
,-2744
,-433
,84
,-6590
,-332
,-7467
,-8087
,7215
,-6766
,5639
,-2835
,-5204
,1476
,4647
,5177
,8087
,7876
,-4567
,9762
,7265
,-5716
,7221
,8630
,3586
,3346
,3531
,1538
,5471
,1900
,4830
,4187
,4770
,-8366
,304
,-5004
,1314
,-3232
,9557
,-8370
,4062
,5840
,-1264
,-344
,7550
,-2155
,-539
,-748
,-9869
,9148
,4116
,-735
,7518
,8331
,2886
,-1115
,7524
,-5053
,8664
,4314
,6562
,8797
,-175
,-1448
,5284
,-5153
,-4799
,3527
,583
,-4076
,-1375
,2993
,-3950
,2898
,-4250
,5028
,579
,362
,9476
,1404
,6938
,-9397
,4415
,5639
,-5971
,-7122
,2876
,7820
,6553
,-3444
,5561
,7700
,9752
,-3908
,-8355
,-845
,9184
,6795
,1678
,5993
,2979
,1527
,-7756
,-8942
,6019
,9085
,7924
,7628
,-1568
,9099
,-3500
,-9977
,-8490
,3841
,5606
,-8741
,-3109
,7504
,-88
,7438
,-8840
,6831
,-1410
,-5847
,6936
,-4767
,-1598
,-2248
,7805
,-2233
,8187
,6927
,1332
,4957
,2414
,-4269
,7706
,-30
,-4780
,3364
,-5920
,-2726
,-1724
,-3910
,-8840
,-8189
,-7190
,5468
,-6770
,-8825
,-8882
,-7596
,-5202
,3963
,-2547
,-2161
,9526
,-1816
,-9647
,6363
,3119
,-2843
,2151
,7743
,5279
,-2730
,-7416
,-6168
,-2445
,2666
,6389
,-513
,6544
,1057
,3504
,-5450
,1681
,2145
,-5250
,9279
,-873
,-9130
,-7913
,-8677
,-3478
,965
,-5679
,1976
,6869
,-8300
,4324
,2394
,-731
,9140
,-1222
,7284
,-8312
,-8426
,481
,-2851
,7003
,3402
,5044
,-1450
,9519
,932
,-3346
,7241
,3023
,5258
,7920
,6757
,-6502
,5301
,573
,-1505
,-2383
,2525
,-6538
,-8459
,2236
,3077
,6852
,1942
,6951
,1348
,7283
,-3045
,-7886
,9355
,9607
,1014
,-8157
,2790
,-3511
,-8247
,-8339
,5398
,-5514
,-1437
,-3138
,-8287
,1792
,5705
,-7724
,-1238
,8523
,6032
,4033
,4242
,-4909
,3573
,9749
,9366
,3089
,7805
,3631
,-9275
,-4355
,-170
,868
,7989
,2393
,-932
,7489
,-5599
,8649
,9024
,-9849
,4928
,-8206
,9950
,-9379
,-2018
,7225
,1148
,-8143
,8635
,-5978
,-636
,694
,9749
,-8913
,7314
,-8136
,3855
,380
,7824
,-3207
,-1715
,8342
,-5829
,-1709
,-1618
,1303
,-3950
,-9003
,1734
,-1354
,-339
,-4630
,-2751
,2790
,-1277
,7677
,-4793
,4785
,-9826
,1214
,-6383
,-9021
,9909
,-5553
,302
,-3734
,2906
,6360
,8091
,-1604
,-5950
,-2321
,-93
,-8540
,7145
,4519
,-9058
,-4985
,6174
,2386
,1295
,-710
,-8323
,-2996
,8636
,6819
,-451
,-9597
,8040
,1167
,-2019
,-3062
,-6729
,3297
,8414
,-4530
,4174
,2655
,-6641
,8988
,5489
,9161
,8952
,-573
,5267
,-5525
,9758
,-9831
,9661
,6577
,-1487
,3436
,-4619
,9904
,-7260
,-748
,-1001
,-5224
,-7530
,1348
,-9440
,336
,909
,9072
,-2661
,1167
,-3342
,1343
,4070
,6914
,-8978
,776
,-2925
,-9074
,-3938
,8874
,8358
,-120
,2711
,-3156
,-4748
,-3217
,-67
,7198
,-8252
,-8380
,1845
,-8952
,-6099
,8210
,-2990
,-9345
,3343
,3385
,-2906
,1229
,9136
,3110
,-1316
,-6971
,-7236
,4092
,-441
,-1293
,-4276
,9759
,-3057
,2810
,-3619
,-668
,3594
,-2181
,5958
,-8748
,3310
,-425
,1886
,-9812
,-3418
,-5548
,8379
,-1689
,-4872
,6175
,2242
,-87
,-9372
,3893
,-9146
,-5373
,-7225
,1556
,-3855
,-4221
,-5623
,-6527
,2376
,8508
,-763
,-3244
,1987
,1946
,-1309
,7599
,6931
,-5025
,-6444
,-4718
,-3541
,-9280
,65
,-7692
,-2945
,-4736
,2242
,-3207
,-7197
,1352
,-5204
,-9886
,2291
,-7046
,9325
,-4095
,-252
,3711
,-8370
,-2595
,6770
,4828
,-216
,-234
,6569
,-9244
,4810
,-1607
,5000
,-441
,1675
,1630
,-3113
,-1403
,5861
,-2722
,-7689
,-7914
,5760
,6139
,7746
,8139
,1933
,-7968
,9184
,-3322
,-9800
,9177
,-238
,1024
,1792
,2511
,-3688
,-4019
,-4060
,378
,860
,116
,-6117
,-6244
,3937
,1259
,2448
,-622
,8549
,-5787
,8579
,1099
,1800
,-4522
,8347
,8707
,-9148
,-1604
,-5327
,5805
,713
,1536
,-2056
,-2936
,7141
,-1462
,3992
,-1234
,5732
,-7988
,3521
,-2945
,5047
,-5160
,4411
,-4469
,-4763
,-3626
,2278
,-5790
,8732
,4803
,5585
,-9929
,8689
,2960
,-3083
,9412
,1519
,3944
,-1693
,9571
,-494
,-5294
,3581
,3718
,7056
,8681
,3694
,-2822
,-3478
,6583
,7348
,4056
,-879
,8436
,-7981
,-1988
,2053
,7161
,-6640
,121
,-7005
,4718
,-192
,6897
,6951
,-5695
,2333
,-964
,-5186
,76
,9277
,-3027
,9279
,-1059
,3770
,3336
,-362
,-668
,1211
,9149
,384
,3674
,2652
,4058
,493
,-7591
,4301
,-4385
,-7200
,-7671
,5413
,-6292
,778
,1310
,-1691
,9361
,2698
,-2579
,6959
,5099
,4268
,-496
,-7804
,-6774
,-1687
,2627
,-9858
,-2155
,8336
,-944
,-5894
,-594
,-490
,7178
,-218
,-3898
,-5861
,-3301
,5310
,-7593
,-7547
,-6170
,919
,4063
,8922
,-7123
,8491
,-9877
,-2744
,1976
,-3008
,-8149
,7308
,-2136
,4166
,4116
,-518
,7108
,9748
,7261
,6092
,-5716
,2002
,4528
,-5841
,8797
,1709
,4429
,-8065
,2588
,3612
,716
,-4558
,-8396
,-7702
,-2685
,-6948
,-1293
,-6667
,7231
,2830
,-9615
,756
,3149
,1675
,-602
,-2194
,2612
,-7968
,-9972
,-1004
,1445
,5090
,9390
,-2510
,-2363
,5219
,-8468
,6384
,-2662
,1211
,8013
,1536
,6075
,-5560
,5652
,-6155
,1079
,-2264
,-7832
,-2024
,4277
,314
,2402
,-2070
,2671
,9458
,2780
,8465
,1960
,8506
,-4568
,-8189
,2913
,-1874
,-3686
,-1837
,5274
,-8149
,-5978
,-9394
,-1452
,1393
,-1323
,-3814
,756
,8426
,-5104
,4166
,-2184
,-1111
,-588
,3125
,3458
,4953
,-827
,-2445
,7377
,-5060
,6684
,8565
,8315
,-3908
,3746
,-478
,-8258
,1294
,-6404
,-9925
,9051
,-7813
,2946
,-7387
,-3318
,-9418
,7961
,8433
,-164
,3511
,7815
,-9670
,-6320
,332
,2320
,7761
,337
,6506
,-6029
,9923
,2090
,6932
,-3321
,-8307
,8569
,9130
,3424
,9780
,5369
,6391
,-7432
,1911
,4208
,-2057
,-3908
,7026
,-75
,-9897
,-9058
,-1227
,-6915
,3674
,-9190
,3374
,7691
,132
,2680
,-3416
,-6451
,-1145
,9366
,4994
,3364
,3403
,7141
,-668
,324
,-3234
,-2233
,-6633
,-6531
,5081
,-1513
,1426
,-1537
,0
,4575
,5189
,-9584
,-9492
,3085
,6885
,8055
,9445
,-7752
,-1525
,-5475
,-152
,2634
,-6597
,2381
,-7215
,3346
,924
,9688
,1177
,2466
,5945
,1053
,8984
,9822
,-2556
,6314
,5945
,7401
,2503
,1279
,2012
,9052
,-4502
,3456
,1363
,-3532
,812
,6925
,-2049
,9545
,8815
,6270
,-319
,3268
,4013
,-8304
,2283
,-298
,-1194
,7998
,-9724
,5735
,-1135
,5180
,-294
,2022
,-3257
,-2744
,818
,6924
,-4748
,-9120
,5028
,3908
,4121
,8946
,-5196
,-5759
,2518
,6424
,-9512
,4166
,5036
,5119
,6615
,-2255
,8916
,7846
,-7329
,5112
,3694
,-6959
,-8441
,8855
,2164
,-1988
,-6162
,-9022
,-347
,9129
,6541
,4957
,6880
,7963
,7346
,-1769
,-2687
,-693
,-2730
,5214
,-62
,-9090
,5344
,2336
,-8733
,-3318
,-1375
,5732
,-5470
,-1075
,4390
,-1608
,-6923
,-5436
,-7092
,2312
,-1931
,-4226
,-4389
,-8191
,-5604
,-2558
,9184
,9428
,-2002
,5894
,-6358
,8882
,-919
,5198
,-5726
,-5572
,-5091
,-105
,-2432
,-8451
,8584
,-2628
,-2240
,1879
,1521
,-7704
,2328
,7474
,2358
,-4617
,1259
,8061
,2581
,497
,-5702
,4528
,-7230
,-2019
,6982
,1615
,932
,-9545
,2607
,-4419
,109
,-7486
,-2019
,-7905
,5488
,-8694
,-5913
,7126
,-7603
,1599
,-8699
,2171
,-5079
,9489
,-8579
,-7096
,2720
,-594
,8908
,-8644
,9607
,-2448
,-3671
,-6467
,3808
,-1821
,2965
,2108
,6986
,9522
,347
,-764
,4686
,-5371
,8981
,-2690
,4363
,-1479
,5585
,3015
,-3998
,-8805
,-4612
,-5816
,-342
,7518
,4832
,1691
,4830
,-1399
,-7089
,-1004
,8676
,6209
,-2948
,-7273
,-7401
,-1980
,9993
,-1508
,3098
,2316
,5588
,9099
,6928
,-3594
,-8370
,7494
,6324
,8700
,2651
,2892
,-5820
,3347
,-6140
,-1824
,9020
,-7931
,6032
,827
,-9187
,-7097
,-2248
,-8487
,-7307
,1702
,-1590
,7834
,-2014
,-3880
,3005
,1293
,-8569
,-7864
,-4294
,-7092
,-8331
,-5514
,-720
,1184
,-3686
,-1964
,-2081
,-9219
,-2014
,-7730
,-5147
,2776
,-9543
,2608
,-764
,-9999
,-6082
,-7836
,6132
,2538
,-8478
,8334
,-8243
,3291
,5655
,-7724
,8508
,-3021
,-919
,-4526
,5036
,2003
,791
,-5892
,1303
,-5766
,2414
,-2107
,-2547
,-4978
,-9907
,8997
,-6797
,4990
,-4019
,-8451
,573
,-1711
,9524
,3250
,-5021
,-6497
,7618
,4106
,-3191
,-710
,400
,7749
,-4617
,-2835
,-1814
,2395
,1213
,-1480
,3098
,6962
,1271
,5195
,-7304
,8752
,-2863
,-3862
,3330
,-8723
,5413
,-4265
,1124
,-8841
,1161
,-8292
,5544
,9378
,-3215
,2119
,-618
,-6440
,4380
,3932
,-2205
,-3595
,-8857
,2357
,-5888
,-8149
,-6691
,3225
,9227
,-8917
,-9732
,-515
,-1909
,3383
,1957
,1948
,-2205
,-8018
,9095
,-7307
,2386
,-241
,5166
,-3855
,-1458
,9519
,-2019
,9223
,7918
,6317
,-7369
,-3264
,8455
,-7213
,-6441
,3815
,2092
,5239
,-5605
,-3453
,-7914
,-3814
,8201
,9525
,5112
,-1151
,-6027
,-5551
,-1972
,6628
,-244
,-1469
,-1607
,8190
,-3802
,-353
,9440
,-3166
,9661
,1145
,672
,6759
,336
,-7850
,-4058
,-5812
,-6146
,6258
,4789
,9335
,-6393
,7675
,-5195
,-3649
,6549
,-8183
,6129
,-3645
,5273
,4731
,7244
,-897
,1160
,2685
,8805
,-4413
,-6390
,-2514
,-394
,6079
,608
,1395
,-3209
,307
,3330
,-7583
,8290
,6009
,-2211
,3755
,-1294
,-8339
,-6153
,-8576
,-6974
,4337
,6242
,2300
,-6328
,4248
,-7494
,-8366
,1798
,2531
,8203
,-9499
,6976
,-2510
,4651
,-9647
,-8408
,6519
,-4560
,5869
,-9391
,-1752
,-6674
,-7947
,3760
,4318
,-5463
,2828
,-1302
,-1990
,8770
,-1066
,132
,-8310
,-1229
,1837
,-6150
,9080
,-5461
,8272
,8563
,7435
,-4822
,-6193
,-8605
,435
,-2268
,-4790
,-6712
,2729
,8214
,-8534
,362
,5099
,-7672
,6103
,8313
,8008
,8110
,4842
,9332
,1034
,1898
,2009
,-5816
,-5449
,9021
,-8769
,261
,2406
,-4971
,-3566
,-5097
,2608
,-9308
,6547
,4090
,4080
,-3017
,8249
,7951
,-8735
,9056
,-2719
,-6527
,-4405
,-3502
,2862
,9904
,-8708
,48
,-7478
,-694
,9099
,-2081
,3809
,-2357
,9237
,5436
,1614
,-1446
,8144
,7640
,8565
,-9833
,-9647
,-8438
,6674
,-7603
,5042
,8717
,5918
,-3592
,6360
,-3180
,8784
,3250
,-2966
,-4231
,1674
,-6366
,4311
,4119
,-2945
,4485
,1680
,-7198
,1793
,1948
,-6390
,-1533
,579
,-3924
,9520
,-9658
,7998
,-4779
,-4058
,-4526
,-3705
,-9953
,6795
,-2210
,1063
,-8830
,856
,2594
,7280
,9509
,-5840
,-9310
,-9850
,7659
,-6840
,6601
,-1448
,-3309
,-4767
,3824
,34
,1508
,7908
,3151
,370
,-7888
,1427
,130
,6660
,458
,5413
,715
,6439
,5753
,1155
,-9597
,9481
,-6105
,-500
,4356
,1135
,608
,922
,-7920
,-1354
,-5615
,4789
,3123
,5280
,-4583
,9161
,9910
,2183
,-4658
,2612
,173
,2747
,9539
,985
,7574
,7278
,5276
,-9775
,-3224
,-6609
,-3909
,7459
,1190
,7178
,-2828
,-353
,-2412
,-9881
,8867
,4321
,-5147
,5406
,8740
,-6540
,7436
,-7596
,4563
,-3688
,-111
,-6527
,4061
,-6396
,-1789
,6870
,-9147
,-6361
,7055
,-9466
,7640
,5723
,-9970
,9950
,1827
,-6828
,-2987
,5500
,-9502
,3974
,272
,345
,-9169
,-5749
,-6959
,8523
,-2157
,5413
,-932
,7474
,-7365
,6393
,-6041
,6553
,-5706
,3120
,-873
,-5025
,-9871
,9160
,-3963
,-3349
,-7420
,-2255
,-4241
,1919
,258
,2997
,-6647
,-7771
,4630
,-6353
,-4877
,8750
,-6163
,-9600
,-283
,7064
,9524
,6092
,-1623
,-3864
,4385
,-5412
,-8017
,-1956
,7852
,8084
,6438
,-9231
,3214
,9649
,-6498
,-1202
,-5108
,3485
,7751
,-8781
,6480
,947
,608
,-981
,-976
,841
,-6570
,7895
,-1824
,5196
,1630
,-1956
,-451
,-2351
,8002
,7631
,4910
,497
,5812
,-3452
,-2961
,-468
,8139
,3027
,-1209
,8379
,2724
,-8120
,-7301
,-4108
,6109
,645
,6986
,-5816
,-8739
,8869
,-8782
,-36
,-5856
,5466
,-4390
,6138
,608
,-5658
,-2553
,2811
,8585
,-850
,7512
,7130
,2989
,-9941
,1389
,5413
,4647
,185
,1217
,-9867
,-3180
,-6695
,9206
,-2916
,-3209
,8301
,8407
,-7550
,2508
,6356
,-1668
,283
,-6648
,2683
,2316
,9804
,7448
,9010
,2351
,-9599
,-4091
,-6901
,7029
,-2157
,6687
,-6906
,8210
,8233
,9275
,-7969
,1537
,-7880
,-7988
,-9805
,-2555
,-3288
,-1657
,-111
,9424
,-133
,4044
,9115
,1332
,8091
,-4933
,-8942
,-9403
,-7668
,1793
,6861
,-480
,-3688
,-5971
,1029
,7580
,-3060
,4017
,4851
,8077
,224
,-4632
,-359
,1076
,2458
,-6396
,2773
,-4562
,2019
,-3087
,-7839
,8518
,-119
,-3237
,-9062
,-5453
,-6093
,6638
,-6873
,-2601
,-4976
,8492
,-7567
,-1206
,616
,-8669
,1017
,5048
,16
,-850
,3467
,621
,-5842
,5787
,-8702
,-2694
,-7954
,-5512
,-9252
,130
,-9805
,-46
,337
,5942
,3051
,1141
,-5436
,1560
,-6164
,-8051
,-515
,6870
,1064
,-2795
,7097
,2423
,-5326
,-9942
,8751
,9180
,-8823
,-2205
,-9639
,4070
,9295
,-7165
,-2319
,-4383
,9548
,-8949
,1293
,-5243
,59
,1618
,-9437
,-5301
,-7367
,-347
,-1259
,6435
,2062
,4130
,-5759
,3952
,-2314
,-8748
,-6604
,-4965
,-4514
,3377
,9909
,2509
,2671
,-6364
,4145
,708
,1047
,6784
,4487
,5606
,9950
,678
,2544
,-8937
,-8444
,4161
,-4459
,-6071
,6246
,9481
,9504
,5214
,6930
,-8487
,4427
,-1874
,-4403
,6248
,-888
,8359
,-1610
,4164
,7341
,6665
,4550
,6187
,-8918
,1395
,-1808
,-501
,3357
,4431
,-2818
,-2708
,-6706
,5627
,-2974
,-3255
,1942
,8078
,-4096
,-4916
,1454
,4457
,-5179
,-4276
,-3477
,-8672
,-6500
,3684
,-125
,4096
,-8335
,-8149
,-1757
,-6764
,6914
,3880
,2383
,-3339
,4374
,8040
,-630
,877
,-9193
,5036
,5464
,-3138
,2
,-3993
,-8721
,715
,3250
,-8766
,634
,3995
,5737
,7736
,-8355
,-1371
,4119
,5201
,9336
,1901
,-4250
,-6648
,-1277
,-5991
,-8605
,8086
,9953
,5201
,-7910
,-2805
,1462
,-8475
,-3821
,3400
,8477
,2201
,-4244
,-6936
,109
,8259
,-9058
,8740
,6795
,-3066
,-1254
,-5204
,-7179
,1411
,-9515
,8836
,4662
,-3686
,2201
,-2276
,2424
,1779
,-4616
,-6773
,3823
,-2542
,-9592
,-2019
,3488
,-1441
,-2060
,-9397
,-8029
,-7034
,9754
,4221
,4432
,-4683
,-653
,3895
,1766
,-3505
,-2598
,7038
,1225
,9022
,2344
,6828
,-1086
,-3173
,4847
,-6234
,-2995
,109
,3377
,1014
,421
,-8563
,-3992
,-9325
,-7304
,-8520
,8580
,3379
,-1618
,5143
,6054
,-9767
,3178
,-9614
,2414
,2583
,-6316
,7922
,8413
,7979
,604
,3309
,-6798
,-760
,-4166
,3546
,5436
,-9542
,6553
,-6447
,1573
,5056
,-7850
,-8544
,6193
,-9196
,-8362
,-7699
,-7200
,1546
,-4788
,9124
,-8171
,-1059
,-1303
,4525
,2328
,9458
,-2136
,879
,1161
,-2648
,5580
,9606
,6549
,-1987
,6873
,-602
,8191
,-9399
,-6569
,4116
,-1160
,-8173
,8562
,5398
,9548
,-5269
,8751
,-1296
,-1657
,-8715
,-7061
,3713
,-1657
,-7213
,1073
,-7557
,7272
,6274
,-6302
,-8129
,2919
,-7999
,-7397
,9149
,9333
,5576
,1714
,6770
,9654
,5110
,873
,-8272
,-2238
,-2220
,-4096
,1793
,1591
,2256
,-8856
,3753
,8740
,-5897
,-5926
,-2043
,7348
,9768
,-3408
,-764
,3755
,-7370
,-4413
,7376
,-7544
,9744
,-764
,-1919
,7755
,-3919
,-1295
,-986
,-6955
,-4678
,-2300
,1279
,-4779
,6603
,6217
,8827
,-631
,-4331
,2680
,-189
,-205
,-6343
,-6006
,-2075
,9009
,5385
,-2359
,7654
,5753
,2211
,6997
,7951
,-401
,-3346
,9661
,-5296
,2085
,-1729
,8224
,-189
,9449
,523
,6664
,2200
,-9232
,-7787
,3302
,5059
,-5239
,5663
,-9222
,-3204
,-7808
,-5123
,-727
,2877
,6132
,451
,5311
,-6986
,306
,5500
,-3521
,-905
,9100
,-1183
,6055
,7736
,337
,3326
,-1370
,-3712
,-93
,-5788
,3120
,-3311
,-4441
,-9232
,7146
,-6617
,7517
,9227
,-1174
,-4466
,7627
,-6181
,8805
,-1470
,-5445
,-8899
,9048
,-6676
,-1316
,-9313
,1196
,-6002
,3544
,5734
,158
,-283
,8990
,8681
,1350
,8876
,746
,-3134
,4383
,3431
,2406
,2032
,-5274
,308
,3354
,3455
,-1418
,4916
,-8041
,4479
,-1887
,-4934
,-5555
,-5312
,-4333
,-9446
,9301
,9
,-6387
,-1590
,6496
,3022
,1785
,-2474
,-1098
,3248
,-666
,-6451
,7251
,2958
,6931
,-6164
,-1069
,6571
,-7985
,-7382
,4249
,2617
,-3308
,8294
,-1502
,985
,-8188
,119
,5480
,-3550
,-1956
,-4748
,-4969
,-5195
,9117
,6045
,-5996
,8012
,-8414
,7833
,-6584
,-1742
,7527
,5709
,7057
,-1812
,-370
,9713
,5590
,8669
,4537
,-1570
,-7473
,-5642
,5427
,-2445
,4937
,55
,-9052
,4830
,6118
,-3349
,-6132
,-3922
,-5424
,7203
,-1004
,-6971
,-6548
,-7854
,-2952
,-8180
,3261
,-2720
,3456
,-6574
,-282
,1998
,1919
,3791
,-5134
,1618
,-5250
,-8539
,4527
,-9004
,6876
,5732
,-2511
,9159
,-4921
,-9198
,8741
,3764
,-3569
,9117
,4832
,9730
,-4805
,4239
,9309
,1768
,2295
,8344
,-6774
,-9150
,-4847
,-7665
,4720
,-8781
,-905
,-3346
,3937
,-2473
,915
,-314
,1772
,7743
,6982
,-4162
,8766
,9117
,9044
,-1925
,-401
,4983
,-7835
,8206
,-8884
,6757
,-4384
,9524
,-4323
,7376
,-6145
,-9345
,8470
,-2929
,5933
,-7007
,530
,-7474
,521
,-8540
,1810
,7631
,-6600
,-4754
,-1833
,-6118
,3341
,-2248
,-1396
,8103
,2873
,-9773
,3888
,-6484
,-9904
,6285
,8511
,-4816
,-5699
,-6552
,695
,-1887
,-9395
,-7551
,4362
,-8368
,847
,-7357
,-8806
,-865
,-8129
,-4950
,1143
,-9767
,2637
,9176
,4166
,9022
,-1059
,-4199
,-9850
,-4858
,9279
,-3011
,-5470
,8914
,3694
,9613
,5613
,7830
,-9698
,6466
,4759
,1032
,1691
,-909
,8110
,3974
,5928
,4311
,-9705
,2077
,877
,2209
,-2746
,7157
,-4767
,5274
,778
,3127
,-1027
,4252
,-2431
,-7927
,8682
,1497
,-3318
,-5175
,7768
,-4641
,370
,-6059
,-887
,-9361
,-2014
,6424
,-3057
,9606
,-4950
,-9159
,-8456
,5826
,9509
,2637
,811
,-4093
,7026
,-5097
,-7932
,3133
,-6870
,8864
,-6098
,896
,-5348
,-24
,-7432
,8805
,9761
,-467
,-8823
,6224
,4208
,-2035
,4186
,7174
,-3657
,1116
,-6112
,5431
,50
,1364
,8042
,2850
,-5762
,9445
,-7918
,-9075
,9334
,-8617
,3436
,9267
,-8958
,-7575
,-8351
,-8063
,-9732
,-8813
,-5687
,8530
,-9578
,5375
,250
,2236
,5842
,-8739
,-2255
,-4585
,-156
,2774
,5591
,-6503
,106
,5360
,193
,-2556
,9124
,2012
,-1294
,7274
,3017
,6784
,-5578
,-9705
,-8867
,1167
,5115
,9011
,2810
,-6742
,-5179
,-5274
,-7336
,4380
,2083
,1286
,5081
,9931
,7102
,9668
,5140
,-1294
,1823
,-9000
,-6862
,-2057
,-9145
,-3736
,-9418
,-705
,-3313
,8599
,-6106
,-1161
,3255
,-1948
,3205
,-9168
,2407
,-5786
,-4476
,5442
,154
,-9871
,-5758
,2016
,8398
,-8872
,9909
,3301
,4129
,-6674
,-2207
,18
,7124
,-3637
,8518
,2595
,-1716
,-5689
,-1808
,851
,-8681
,-7276
,3742
,7303
,6343
,2450
,-1351
,3544
,-3060
,6979
,-1729
,-4823
,-7961
,-3243
,-8315
,-9013
,-7370
,-5964
,9818
,8286
,8828
,5300
,9917
,-599
,-4376
,6001
,-8735
,4215
,-8540
,-9706
,-8741
,1959
,3190
,3400
,1191
,3320
,2442
,5434
,-1640
,4126
,8712
,1124
,-200
,-8615
,-5301
,-8315
,-2022
,1679
,-7979
,-7564
,-2307
,-4318
,3315
,6982
,8297
,361
,-4895
,-5642
,1235
,-2138
,6225
,8681
,-7108
,-7542
,5699
,5519
,4482
,330
,3463
,-1786
,-353
,-9592
,9526
,2058
,428
,-4972
,3755
,-1375
,-4629
,9494
,-7994
,-106
,-2298
,3414
,7250
,-1543
,-6885
,-9881
,2924
,547
,-4944
,1497
,-1433
,1246
,-9857
,-5021
,9484
,-2136
,-8024
,-5617
,-3498
,-5195
,-7853
,-344
,569
,7347
,-5662
,-103
,1151
,7484
,-362
,4508
,2293
,7519
,2557
,3038
,-694
,6181
,1521
,6601
,-622
,6714
,3231
,-7999
,5652
,4393
,-1420
,-4793
,-5205
,-3836
,-9403
,-2532
,9940
,-1197
,6812
,347
,1295
,6598
,4504
,3352
,8125
,8413
,3718
,-6966
,-618
,-8514
,46
,9969
,3755
,-8416
,2501
,-5196
,2850
,-7672
,-9633
,3382
,8649
,-1478
,-6315
,-1157
,-6489
,-7474
,3409
,-6706
,7803
,-1197
,3672
,6927
,7628
,-8024
,-6795
,-748
,-7745
,-1963
,4416
,-9455
,8271
,5884
,-1055
,-3339
,3612
,486
,2617
,-6023
,-1178
,-4079
,7949
,1005
,6924
,-1055
,-6484
,-1119
,-5742
,-2019
,-830
,-205
,-3427
,-2722
,-1224
,-2335
,3251
,-359
,5524
,-2184
,-246
,-6470
,1197
,9150
,9227
,-8365
,-5259
,3596
,9369
,9485
,-119
,-7290
,-7097
,4647
,8655
,-9063
,-2694
,-8365
,-1598
,-534
,9173
,-2922
,-4526
,6301
,-9062
,-875
,-354
,-4542
,3912
,-6864
,-1225
,483
,8043
,-7634
,-9379
,306
,4646
,-3846
,-3817
,-1735
,3623
,-1098
,574
,-1101
,-5269
,-6790
,7580
,-9288
,4667
,-4767
,3158
,-1550
,428
,-5463
,-4878
,7421
,3767
,582
,-67
,4390
,3085
,-8274
,-1969
,8004
,7896
,-4905
,9522
,8788
,5991
,-8122
,1075
,8017
,8518
,1214
,5908
,9988
,-2636
,-4266
,-9029
,3085
,-8688
,8125
,2078
,-9188
,-5143
,-7097
,-6570
,125
,-2007
,9080
,7454
,2680
,-5968
,-1716
,1271
,5837
,8410
,-4430
,-5888
,-1595
,-1533
,7241
,4211
,-3817
,-9907
,7484
,459
,-593
,1141
,7724
,-1274
,6257
,6383
,5956
,3358
,6772
,-5426
,5359
,8155
,6694
,-120
,-580
,-4665
,9763
,-7551
,8916
,-4199
,8574
,-5994
,5617
,-2822
,-7598
,630
,1491
,-2284
,5081
,9016
,-3723
,-8509
,-7442
,6148
,5630
,1414
,4585
,-3044
,6356
,-3857
,-8901
,-8360
,-1202
,-2795
,-1229
,6228
,734
,3469
,9373
,1139
,4842
,6979
,-4710
,-8396
,2796
,-6667
,-7255
,6387
,-8372
,-6674
,-7162
,9336
,9412
,8817
,6211
,7692
,-1756
,-9608
,9115
,3673
,4513
,3544
,-478
,-7030
,5290
,-6767
,485
,3033
,-6847
,-653
,-942
,-9653
,8101
,3358
,-6864
,-748
,-381
,-6662
,2256
,3209
,-5076
,2726
,9380
,6247
,-3204
,778
,-9801
,-3634
,-6880
,-2325
,9900
,4349
,5777
,-3220
,-3600
,3352
,9131
,3245
,155
,-8496
,-5578
,3808
,-7702
,5933
,-8159
,-4713
,1168
,-680
,-6306
,2206
,-2703
,9406
,-6276
,2481
,2225
,-1588
,1555
,131
,9180
,1686
,-760
,-3995
,7109
,-7817
,3864
,1202
,2860
,-1570
,583
,985
,8022
,-385
,6211
,-4223
,-606
,-2307
,5334
,4003
,-1852
,6519
,-2521
,999
,5767
,7301
,7066
,-8654
,-7280
,-1747
,8192
,-7934
,8588
,728
,5102
,-5573
,5571
,1016
,-9724
,6360
,-5292
,-6640
,-3232
,1419
,9756
,-5740
,-8854
,9982
,6462
,5652
,7920
,-8149
,-5742
,-4830
,-8395
,120
,4955
,-3673
,-8735
,-4394
,-2556
,-3176
,-9288
,-6742
,6018
,2910
,-2271
,-9941
,-7994
,-9771
,-1860
,3282
,-7284
,-9039
,258
,-9647
,-4221
,5471
,-5195
,8403
,-2006
,3324
,7971
,-8890
,693
,7048
#endif  // TEST
};

std::list<int64_t>::iterator mix(
    std::list<int64_t>& values,
    std::vector<std::list<int64_t>::iterator>& iterators)
{
    std::list<int64_t>::iterator zero_it;
    const int64_t N = iterators.size();

#ifdef DEBUG
    std::cout << std::endl << "-------------------------" << std::endl;
    for (auto val : values) std::cout << val << ", ";
    std::cout << std::endl;
#endif // DEBUG

    for (auto& it : iterators)
    {
        int64_t v = *it;
        if (0 == v)
        {
            zero_it = it;
        }
        else if(v > 0)
        {
            int64_t moves = v % (N-1);
            for (int64_t i = 0; i < moves; ++i)
            {
                auto pos = values.erase(it);
                if (pos == values.end()) pos = values.begin();
                ++pos;
                it = values.insert(pos, v);
            }
        }
        else
        {
            int64_t moves = (-v) % (N-1);
            for (int64_t i = 0; i < moves; ++i)
            {
                auto pos = values.erase(it);
                if (pos == values.begin()) pos = values.end();
                --pos;
                it = values.insert(pos, v);
            }
        }

#ifdef DEBUG
        for (auto val : values) std::cout << val << ", ";
        std::cout << std::endl;
#endif // DEBUG
    }

    return zero_it;
}

int64_t part1()
{
    std::list<int64_t> values(input);
    std::vector<std::list<int64_t>::iterator> iterators;
    for (auto it = values.begin(); it != values.end(); ++it)
        iterators.push_back(it);
    std::list<int64_t>::iterator zero_it = mix(values, iterators);

    int64_t rv = 0;
    for (size_t n = 0; n < 3; ++n)
    {
        for (int64_t i = 0; i < 1000; ++i)
        {
            ++zero_it;
            if (zero_it == values.end()) zero_it = values.begin();
        }
        rv += *zero_it;
    }

    return rv;
}

int64_t part2()
{
    constexpr int64_t decryption_key = 811589153;
    std::list<int64_t> values;
    for (auto v : input) values.push_back(v * decryption_key);
    std::vector<std::list<int64_t>::iterator> iterators;
    for (auto it = values.begin(); it != values.end(); ++it)
        iterators.push_back(it);
    std::list<int64_t>::iterator zero_it;
    
    for (size_t i = 0; i < 10; ++i) zero_it = mix(values, iterators);

    int64_t rv = 0;
    for (size_t n = 0; n < 3; ++n)
    {
        for (int64_t i = 0; i < 1000; ++i)
        {
            ++zero_it;
            if (zero_it == values.end()) zero_it = values.begin();
        }
        rv += *zero_it;
    }

    return rv;
}

int main()
{
    std::cout << "Part 1: " << part1() << std::endl;
    std::cout << "Part 2: " << part2() << std::endl;
    return 0;
}
