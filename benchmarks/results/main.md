#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/codspeed/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/codspeed/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.486259710124221e-05 | 2.4458425141476957e-05 | 1.63% | 1.65% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.4984415142410767e-05 | 2.4432661033720575e-05 | 2.21% | 2.26% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.4803178923747986e-05 | 2.4479015439758552e-05 | 1.31% | 1.32% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4730729871442485e-05 | 2.453225117222411e-05 | 0.80% | 0.81% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.5051974785366576e-05 | 2.4168400985961818e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.46777770416256e-05 | 2.4439621088683682e-05 | 0.97% | 0.97% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.4747865499175616e-05 | 2.3909131342484053e-05 | 3.39% | 3.51% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.511229757042758e-05 | 2.3957984076664545e-05 | 4.60% | 4.82% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.5007549780521614e-05 | 2.445607876728973e-05 | 2.21% | 2.25% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4945966653270086e-05 | 2.4020740913514647e-05 | 3.71% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4716048303349956e-05 | 2.41704274490011e-05 | 2.21% | 2.26% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4883785695563825e-05 | 2.4456681569289764e-05 | 1.72% | 1.75% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4907273783093094e-05 | 2.402665103740919e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4758094264657883e-05 | 2.4409535275342818e-05 | 1.41% | 1.43% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.481449838319353e-05 | 2.4066362541877446e-05 | 3.01% | 3.11% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.477624305013395e-05 | 2.332768838066832e-05 | 5.85% | 6.21% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4769040567003166e-05 | 2.401650308643787e-05 | 3.04% | 3.13% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4776003518664263e-05 | 2.3544331847834405e-05 | 4.97% | 5.23% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4819310444749813e-05 | 2.410683004127858e-05 | 2.87% | 2.96% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.5032339736661526e-05 | 2.4648620515397957e-05 | 1.53% | 1.56% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.482447676043807e-05 | 2.4447669380322654e-05 | 1.52% | 1.54% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.4668767094700906e-05 | 2.439862005145407e-05 | 1.10% | 1.11% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.492057365407588e-05 | 2.4313427820716247e-05 | 2.44% | 2.50% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4735140215888362e-05 | 2.3860567112604177e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4849643828626028e-05 | 2.4435546658728225e-05 | 1.67% | 1.69% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.5096487334266554e-05 | 2.4371243333823605e-05 | 2.89% | 2.98% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.4014089529446886e-05 | 2.3181815914644957e-05 | 3.47% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3816295291833886e-05 | 2.2979400676713428e-05 | 3.51% | 3.64% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3994098214137518e-05 | 2.3110454958689338e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.381975347447052e-05 | 2.3186830366188676e-05 | 2.66% | 2.73% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.400733817294919e-05 | 2.274069136628715e-05 | 5.28% | 5.57% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.384144863606586e-05 | 2.3051123821965664e-05 | 3.31% | 3.43% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.356565395590017e-05 | 2.3438622167757287e-05 | 0.54% | 0.54% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.381216880918144e-05 | 2.3365574882009134e-05 | 1.88% | 1.91% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.368441476726984e-05 | 2.2798737205422027e-05 | 3.74% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3871665178230082e-05 | 2.3091319874960852e-05 | 3.27% | 3.38% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3689496437625562e-05 | 2.2828743556706897e-05 | 3.63% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3707852291899764e-05 | 2.2885744683222905e-05 | 3.47% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.3738580895285326e-05 | 2.349526409501004e-05 | 1.02% | 1.04% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3738592154853735e-05 | 2.2964631318693878e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.383581173356469e-05 | 2.28297708578614e-05 | 4.22% | 4.41% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3583667427694808e-05 | 2.299432663897682e-05 | 2.50% | 2.56% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3868468969824572e-05 | 2.276036155303421e-05 | 4.64% | 4.87% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3435736265037943e-05 | 2.2718463095328776e-05 | 3.06% | 3.16% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3868959925966964e-05 | 2.3168206302066826e-05 | 2.94% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3783799539474506e-05 | 2.2757236172096e-05 | 4.32% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.371134173013365e-05 | 2.3057207315507002e-05 | 2.76% | 2.84% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.3967571100648254e-05 | 2.2767141275170016e-05 | 5.01% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.361507762015399e-05 | 2.2882375742075917e-05 | 3.10% | 3.20% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.370159530051919e-05 | 2.2926051408679126e-05 | 3.27% | 3.38% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3599749531348685e-05 | 2.3112328994314693e-05 | 2.07% | 2.11% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3555103034762814e-05 | 2.2830965386962455e-05 | 3.07% | 3.17% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3699365172038087e-05 | 2.3071887165503082e-05 | 2.65% | 2.72% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.388877290185141e-05 | 2.3079584183014453e-05 | 3.39% | 3.51% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.3997391380117233e-05 | 2.230274992512418e-05 | 7.06% | 7.60% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3953981205003026e-05 | 2.2445272445226416e-05 | 6.30% | 6.72% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3487739130378068e-05 | 2.2730958170682348e-05 | 3.22% | 3.33% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.351870092689837e-05 | 2.2434860420314948e-05 | 4.61% | 4.83% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3610864416774196e-05 | 2.241291669890037e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3494034998202916e-05 | 2.255843035106606e-05 | 3.98% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3838987743934568e-05 | 2.3591986033108985e-05 | 1.04% | 1.05% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.3764632008011048e-05 | 2.2504767057441422e-05 | 5.30% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3799378331657127e-05 | 2.3114808355567958e-05 | 2.88% | 2.96% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3844147769314686e-05 | 2.223668772307004e-05 | 6.74% | 7.23% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3956946973098948e-05 | 2.3013656758724405e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3630908650458426e-05 | 2.2357097153203007e-05 | 5.39% | 5.70% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.389613663538118e-05 | 2.2865810277274878e-05 | 4.31% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3500428531586998e-05 | 2.3105115645436146e-05 | 1.68% | 1.71% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.3773007686503436e-05 | 2.291260429937838e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.3787990397034364e-05 | 2.298074284582997e-05 | 3.39% | 3.51% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.369687909008669e-05 | 2.2842568664100214e-05 | 3.61% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.381536451735287e-05 | 2.2808915220509072e-05 | 4.23% | 4.41% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.38297271766508e-05 | 2.240311882372706e-05 | 5.99% | 6.37% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3399099162881967e-05 | 2.2650726521296508e-05 | 3.20% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3827715773904815e-05 | 2.2351860204791332e-05 | 6.19% | 6.60% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3535733081300746e-05 | 2.2543378699717236e-05 | 4.22% | 4.40% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3662325752270164e-05 | 2.2399942017852602e-05 | 5.33% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3428682651307478e-05 | 2.3201916478119852e-05 | 0.97% | 0.98% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3470631145934114e-05 | 2.2514533476644064e-05 | 4.07% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.358686650631328e-05 | 2.2471019513004746e-05 | 4.73% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.3573309164053194e-05 | 2.259874199041696e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3680616283100053e-05 | 2.2717382338461045e-05 | 4.07% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.365679947497978e-05 | 2.252081420596877e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3598192091697187e-05 | 2.2998460514597863e-05 | 2.54% | 2.61% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3495291438423122e-05 | 2.2656430760695747e-05 | 3.57% | 3.70% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.336569182981409e-05 | 2.256276159386955e-05 | 3.44% | 3.56% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.361960057391564e-05 | 2.3045048366690217e-05 | 2.43% | 2.49% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3584269475994257e-05 | 2.2831585628552727e-05 | 3.19% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3986159838817848e-05 | 2.269569690394601e-05 | 5.38% | 5.69% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3445987362204095e-05 | 2.2571093870879485e-05 | 3.73% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3688479107979328e-05 | 2.2534916270386954e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.35380869461924e-05 | 2.2549549459722574e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3533987961902707e-05 | 2.2537726517952493e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.3484719218812962e-05 | 2.25227991225191e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.3461668417794124e-05 | 2.2675540134800163e-05 | 3.35% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.3534238411058848e-05 | 2.242954698474773e-05 | 4.69% | 4.93% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.3582034548032057e-05 | 2.5109056825984317e-05 | -6.48% | -6.08% | 0.94x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3560616647834545e-05 | 2.260443148828098e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3508462607141e-05 | 2.2893643934463486e-05 | 2.62% | 2.69% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.363961803486269e-05 | 2.2906288134521587e-05 | 3.10% | 3.20% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.354801092072672e-05 | 2.266490562171723e-05 | 3.75% | 3.90% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3502241806227103e-05 | 2.2469246460050408e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3426590594359814e-05 | 2.2611489630073117e-05 | 3.48% | 3.60% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3495993078923658e-05 | 2.2543620408536564e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.3439986494660673e-05 | 2.2548506445826768e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3431950688402526e-05 | 2.2874297447362312e-05 | 2.38% | 2.44% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3631471647873607e-05 | 2.3087848248907117e-05 | 2.30% | 2.35% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.367489003644359e-05 | 2.2455092456742424e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3655595253531815e-05 | 2.223636889335869e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.3839007683131607e-05 | 2.2727703109005155e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3810479058738765e-05 | 2.261036553088592e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3601044876980302e-05 | 2.3083355545806022e-05 | 2.19% | 2.24% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3601084903699953e-05 | 2.4565554037087956e-05 | -4.09% | -3.93% | 0.96x | ❌ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3607323189245073e-05 | 2.2657487244118072e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.3677930420466428e-05 | 2.2627584182180795e-05 | 4.44% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3756209928828774e-05 | 2.2404164478853014e-05 | 5.69% | 6.03% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3722770907852604e-05 | 2.2634910982830052e-05 | 4.59% | 4.81% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3856938012119757e-05 | 2.2513054275461088e-05 | 5.63% | 5.97% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3823170740061018e-05 | 2.2653798463894532e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3522446608338686e-05 | 2.2598308718888496e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3671795492751794e-05 | 2.4265428827901007e-05 | -2.51% | -2.45% | 0.98x | ❌ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3607462219684073e-05 | 2.5596869009957374e-05 | -8.43% | -7.77% | 0.92x | ❌ |
| `hexbytes_getitem_index[3-long alternating]` | 2.376958075523316e-05 | 2.2402448435095748e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3605076995233877e-05 | 2.3681123690745318e-05 | -0.32% | -0.32% | 1.00x | ❌ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3828355484477036e-05 | 2.3475336786837735e-05 | 1.48% | 1.50% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3597548056653165e-05 | 2.2639811407404318e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.3689166124603013e-05 | 2.3204052161454243e-05 | 2.05% | 2.09% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3394196265071435e-05 | 2.2671175453437905e-05 | 3.09% | 3.19% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.362460856232737e-05 | 2.323481532863069e-05 | 1.65% | 1.68% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.3583063565039674e-05 | 2.292065164765267e-05 | 2.81% | 2.89% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.359649931749019e-05 | 2.2675099336187573e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3486476527115234e-05 | 2.287047395050403e-05 | 2.62% | 2.69% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3849332180893457e-05 | 2.272189615955661e-05 | 4.73% | 4.96% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.352202446201972e-05 | 2.3672278996537742e-05 | -0.64% | -0.63% | 0.99x | ❌ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3721976321686087e-05 | 2.250941826806174e-05 | 5.11% | 5.39% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3683179405049695e-05 | 2.2456785741879957e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.356878820793673e-05 | 2.414682873924476e-05 | -2.45% | -2.39% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3631206626683382e-05 | 2.29366672301784e-05 | 2.94% | 3.03% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3751683786839664e-05 | 2.2514848132598977e-05 | 5.21% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3519341969419073e-05 | 2.3136578807121613e-05 | 1.63% | 1.65% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3627254457365578e-05 | 2.2859902629676063e-05 | 3.25% | 3.36% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3622903651732112e-05 | 2.2908128184083256e-05 | 3.03% | 3.12% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3399403140327074e-05 | 2.3154592564140665e-05 | 1.05% | 1.06% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.342262610139967e-05 | 2.3303094848931234e-05 | 0.51% | 0.51% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3479842064441345e-05 | 2.3009321710138007e-05 | 2.00% | 2.04% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.361917266252194e-05 | 2.275464596914793e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3511743241646877e-05 | 2.24751413200818e-05 | 4.41% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.372462095058298e-05 | 2.2505424290339515e-05 | 5.14% | 5.42% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.367346912984751e-05 | 2.2408799849922365e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.368345032644884e-05 | 2.3388285579888236e-05 | 1.25% | 1.26% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.3842449598275333e-05 | 2.2389021501242015e-05 | 6.10% | 6.49% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.3732018799276882e-05 | 2.2854819594886793e-05 | 3.70% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.392801629186756e-05 | 2.33722463050548e-05 | 2.32% | 2.38% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.387174340951076e-05 | 2.2303861568439984e-05 | 6.57% | 7.03% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3739641113174197e-05 | 2.2522046188969887e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3935392930736028e-05 | 2.2574239492525804e-05 | 5.69% | 6.03% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.370416259649624e-05 | 2.328804271577738e-05 | 1.76% | 1.79% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.383713924154404e-05 | 2.2323666683125456e-05 | 6.35% | 6.78% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3940531695093448e-05 | 2.3121420790234485e-05 | 3.42% | 3.54% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.4071432770097574e-05 | 2.2418924401275196e-05 | 6.87% | 7.37% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3863547987550693e-05 | 2.2744475145735973e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.383422466655314e-05 | 2.2628223315390683e-05 | 5.06% | 5.33% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3882129915499392e-05 | 2.2494147566485275e-05 | 5.81% | 6.17% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.3867742384095147e-05 | 2.257079100055047e-05 | 5.43% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.3813286921068434e-05 | 2.2376026891602057e-05 | 6.04% | 6.42% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.363808177233583e-05 | 2.264895503714242e-05 | 4.18% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.369421670223226e-05 | 2.2705506823244384e-05 | 4.17% | 4.35% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.4101516734545274e-05 | 2.3252534520378185e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3669271507484704e-05 | 2.2533144490598674e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3828481093182195e-05 | 2.2804574551404992e-05 | 4.30% | 4.49% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.377729202191137e-05 | 2.231913596428647e-05 | 6.13% | 6.53% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.395497939003332e-05 | 2.2547892815460807e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.180104093992864e-05 | 6.005884425266927e-05 | 26.58% | 36.20% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.444294058826269e-05 | 6.040329154708131e-05 | 28.47% | 39.80% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.194497214544768e-05 | 5.9547825002793936e-05 | 27.33% | 37.61% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.19477315863239e-05 | 5.9539575354264015e-05 | 27.34% | 37.64% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.23560323792241e-05 | 6.018822466797723e-05 | 26.92% | 36.83% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.248650881011233e-05 | 5.9382915463611664e-05 | 28.01% | 38.91% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.900975371751939e-05 | 5.674238263878254e-05 | 28.18% | 39.24% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.237853845445036e-05 | 5.909077210657665e-05 | 28.27% | 39.41% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.177984891273043e-05 | 5.943180279620468e-05 | 27.33% | 37.60% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.1851001113272e-05 | 6.0603089764691464e-05 | 25.96% | 35.06% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.187892915988218e-05 | 6.013534333088139e-05 | 26.56% | 36.16% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.264692432287778e-05 | 6.03552164844237e-05 | 26.97% | 36.93% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.216079019123382e-05 | 6.035386134598788e-05 | 26.54% | 36.13% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.180887808636126e-05 | 6.017774527304794e-05 | 26.44% | 35.95% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.223648373973287e-05 | 5.9745559364058976e-05 | 27.35% | 37.64% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.328909487426144e-05 | 5.9619946293987945e-05 | 28.42% | 39.70% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.183766535968168e-05 | 5.972383747837553e-05 | 27.02% | 37.03% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.1429698373382e-05 | 5.97351253009656e-05 | 26.64% | 36.32% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.200165218164552e-05 | 5.977508194526895e-05 | 27.11% | 37.18% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.225668820840565e-05 | 6.043013413498432e-05 | 26.53% | 36.12% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.251938321382501e-05 | 6.005434715094769e-05 | 27.22% | 37.41% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.23639451203606e-05 | 6.020645359712301e-05 | 26.90% | 36.80% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.192467739720214e-05 | 6.03055462845959e-05 | 26.39% | 35.85% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.199374457739509e-05 | 6.002565264398504e-05 | 26.79% | 36.60% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.199550860635021e-05 | 6.004271279027636e-05 | 26.77% | 36.56% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.578014173418129e-05 | 6.005957597633299e-05 | 29.98% | 42.83% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.051849775090975e-05 | 5.693125717761428e-05 | 29.29% | 41.43% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.022695805468914e-05 | 5.6791132386182175e-05 | 29.21% | 41.27% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.229781182098045e-05 | 6.0285573193182706e-05 | 26.75% | 36.51% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.281749489487823e-05 | 6.054947764862569e-05 | 26.89% | 36.78% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.244751417449155e-05 | 5.957172937809558e-05 | 27.75% | 38.40% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.349856762631477e-05 | 5.965178178258403e-05 | 28.56% | 39.98% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.314062331930766e-05 | 6.0425022120080234e-05 | 27.32% | 37.59% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.354998183763445e-05 | 6.050567462963644e-05 | 27.58% | 38.09% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.298689354961636e-05 | 5.9869208136335694e-05 | 27.86% | 38.61% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.141124505360666e-05 | 5.7727587398734286e-05 | 29.09% | 41.03% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.252921260269564e-05 | 6.049379241562326e-05 | 26.70% | 36.43% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.349010126481954e-05 | 6.114311760587071e-05 | 26.77% | 36.55% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.310070083558602e-05 | 6.033489698057164e-05 | 27.40% | 37.73% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.372445366139662e-05 | 6.033098184089992e-05 | 27.94% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.328187562086498e-05 | 6.121954612113442e-05 | 26.49% | 36.04% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.302981199996681e-05 | 6.062029451017449e-05 | 26.99% | 36.97% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.27845602793975e-05 | 6.0650082421745736e-05 | 26.74% | 36.50% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.319804733347867e-05 | 6.035539876335717e-05 | 27.46% | 37.85% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.307844738944235e-05 | 6.0873670895670546e-05 | 26.73% | 36.48% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.280774124197521e-05 | 6.115566899669006e-05 | 26.15% | 35.40% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.30447119483324e-05 | 6.151807756334185e-05 | 25.92% | 34.99% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.342802566830181e-05 | 6.079994225829305e-05 | 27.12% | 37.22% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.371867021145575e-05 | 5.876958488317184e-05 | 29.80% | 42.45% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.306000451562818e-05 | 6.090171141774195e-05 | 26.68% | 36.38% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.291983229932146e-05 | 6.0307723398838916e-05 | 27.27% | 37.49% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.322117050129735e-05 | 5.985238205709011e-05 | 28.08% | 39.04% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.260476054355482e-05 | 5.978725647602911e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.310141147104879e-05 | 6.0514546699007025e-05 | 27.18% | 37.32% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.369428578835663e-05 | 6.043872767156174e-05 | 27.79% | 38.48% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.224128077904059e-05 | 5.8038137912653e-05 | 29.43% | 41.70% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.145195857313713e-05 | 5.837927732263829e-05 | 28.33% | 39.52% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.304711693308541e-05 | 5.938703589016435e-05 | 28.49% | 39.84% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.337165374072978e-05 | 5.97600526187536e-05 | 28.32% | 39.51% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.275339705426979e-05 | 5.972491062963672e-05 | 27.83% | 38.56% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.272140626871565e-05 | 5.94850360090043e-05 | 28.09% | 39.06% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.296320166389137e-05 | 5.962318184014483e-05 | 28.13% | 39.15% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.27372156305993e-05 | 5.975165237524893e-05 | 27.78% | 38.47% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.325258270000986e-05 | 6.0312192050074304e-05 | 27.56% | 38.04% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.980774425233999e-05 | 5.757007551689672e-05 | 27.86% | 38.63% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.271698426466543e-05 | 6.001338033725289e-05 | 27.45% | 37.83% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.272843733337998e-05 | 6.058669751491767e-05 | 26.76% | 36.55% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.360384708932515e-05 | 5.91760467858137e-05 | 29.22% | 41.28% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.339694542774548e-05 | 5.988184992456608e-05 | 28.20% | 39.27% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.276446601273785e-05 | 6.040818631375091e-05 | 27.01% | 37.01% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.288442958282995e-05 | 5.9593212034962976e-05 | 28.10% | 39.08% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.324334644084096e-05 | 5.974979900530978e-05 | 28.22% | 39.32% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.308422540071654e-05 | 5.9896744529769295e-05 | 27.91% | 38.71% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.277080121038323e-05 | 6.097222907693488e-05 | 26.34% | 35.75% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.284635449631884e-05 | 5.986888238529943e-05 | 27.74% | 38.38% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.340571700555694e-05 | 6.068409228623418e-05 | 27.24% | 37.44% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.320993953504087e-05 | 5.9814062157936425e-05 | 28.12% | 39.11% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.306474784224644e-05 | 6.0525113626923274e-05 | 27.14% | 37.24% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.311470262769309e-05 | 6.031451667997957e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.333479475378775e-05 | 6.005691500652563e-05 | 27.93% | 38.76% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.308284526080888e-05 | 5.9289515064754276e-05 | 28.64% | 40.13% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.333611533469949e-05 | 5.9874294667466523e-05 | 28.15% | 39.19% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.280861321119281e-05 | 5.9838601494894696e-05 | 27.74% | 38.39% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.35538684049516e-05 | 6.030852450960665e-05 | 27.82% | 38.54% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.046260637551709e-05 | 5.791670492156452e-05 | 28.02% | 38.93% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.087184587060939e-05 | 5.770308770277671e-05 | 28.65% | 40.15% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.277039987893099e-05 | 6.052446091797196e-05 | 26.88% | 36.76% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.226386982702621e-05 | 5.993099420586363e-05 | 27.15% | 37.26% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.253008796081886e-05 | 6.101870634789509e-05 | 26.06% | 35.25% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.266469017945464e-05 | 5.984846321672046e-05 | 27.60% | 38.12% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.221652614542054e-05 | 5.98163285933946e-05 | 27.25% | 37.45% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.163529380973686e-05 | 5.9930708406669524e-05 | 26.59% | 36.22% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.18944220631039e-05 | 5.971052250456765e-05 | 27.09% | 37.15% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.943736792627761e-05 | 5.666514477852508e-05 | 28.67% | 40.19% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.265027448880253e-05 | 5.936990952831288e-05 | 28.17% | 39.21% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.185865741138544e-05 | 5.975721228679147e-05 | 27.00% | 36.99% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.193872011033077e-05 | 5.946188954203717e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010517701016905471 | 7.814864255196038e-05 | 25.70% | 34.59% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.975176032243948e-05 | 5.768013193757712e-05 | 27.68% | 38.27% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.214294058132452e-05 | 5.997798472817184e-05 | 26.98% | 36.96% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.233287066385266e-05 | 5.9073949847885473e-05 | 28.25% | 39.37% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.217124577168211e-05 | 5.937193749279885e-05 | 27.75% | 38.40% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.186076403590603e-05 | 5.9928475597519476e-05 | 26.79% | 36.60% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.21048869240376e-05 | 6.01731891784263e-05 | 26.71% | 36.45% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.947239549812444e-05 | 7.544721178474934e-05 | 24.15% | 31.84% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 8.337582154060873e-05 | 5.7625707607508834e-05 | 30.88% | 44.69% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 0.00010019129379187649 | 7.229774777978529e-05 | 27.84% | 38.58% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.270865375379916e-05 | 6.109140186934077e-05 | 26.14% | 35.39% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.218504268623111e-05 | 5.993085366513763e-05 | 27.08% | 37.13% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.1964300760342e-05 | 5.9264717943037696e-05 | 27.69% | 38.30% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.212221004364786e-05 | 5.967510057699268e-05 | 27.33% | 37.62% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.143203819876314e-05 | 5.8372094923617695e-05 | 28.32% | 39.51% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.220207915299926e-05 | 7.241136813418074e-05 | 11.91% | 13.52% | 1.14x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.90276943459911e-05 | 5.704317038087654e-05 | 27.82% | 38.54% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.961761850712162e-05 | 5.647839949415153e-05 | 29.06% | 40.97% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.190168456111503e-05 | 6.007229824393459e-05 | 26.65% | 36.34% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.286402950786697e-05 | 5.900444569402554e-05 | 28.79% | 40.44% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.082192267693536e-05 | 5.943489405559259e-05 | 26.46% | 35.98% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.09050387545192e-05 | 5.939434639448223e-05 | 26.59% | 36.22% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.177591613445361e-05 | 5.902832943818637e-05 | 27.82% | 38.54% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.072918557988468e-05 | 5.9141538485824224e-05 | 26.74% | 36.50% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.037443370521069e-05 | 5.7922534520012316e-05 | 27.93% | 38.76% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.797864734355835e-05 | 5.5288310271653134e-05 | 29.10% | 41.04% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.059396353445149e-05 | 5.887993293331466e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.271261532025635e-05 | 5.865874445201529e-05 | 29.08% | 41.01% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.214414791657428e-05 | 5.93774323422095e-05 | 27.72% | 38.34% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 9.982125723454712e-05 | 8.050725676163972e-05 | 19.35% | 23.99% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.092004832576836e-05 | 5.932126646372919e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.110969257075807e-05 | 5.924912441993846e-05 | 26.95% | 36.90% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.067854078418615e-05 | 5.884155763560853e-05 | 27.07% | 37.11% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.961804884943887e-05 | 5.912136038970105e-05 | 25.74% | 34.67% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.070121305717306e-05 | 5.981792754567289e-05 | 25.88% | 34.91% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.335228223366006e-05 | 5.840521126755443e-05 | 29.93% | 42.71% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.853071463793965e-05 | 6.997460014516104e-05 | 28.98% | 40.81% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.131081711685216e-05 | 5.977980488176106e-05 | 26.48% | 36.02% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.330640127578062e-05 | 7.396408528066e-05 | 20.73% | 26.15% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.134663890424763e-05 | 5.84226952826187e-05 | 28.18% | 39.24% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.086136432303315e-05 | 5.807221542460015e-05 | 28.18% | 39.24% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.103325054751563e-05 | 5.906696013772274e-05 | 27.11% | 37.19% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.04204855704093e-05 | 5.872029507906284e-05 | 26.98% | 36.96% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.086082829218551e-05 | 5.86227155142694e-05 | 27.50% | 37.93% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.072558623094866e-05 | 5.7993634108755954e-05 | 28.16% | 39.20% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.847429319029761e-05 | 5.546969389227681e-05 | 29.31% | 41.47% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.849067394482134e-05 | 5.609093727587066e-05 | 28.54% | 39.93% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.096896891186742e-05 | 5.737006255257194e-05 | 29.15% | 41.13% | 1.41x | ✅ |
| `hexbytes_new['']` | 7.139952644196704e-05 | 3.690875638742576e-05 | 48.31% | 93.45% | 1.93x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.199872672882697e-05 | 5.08330734193873e-05 | 44.75% | 80.98% | 1.81x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.293059980418614e-05 | 5.107694234340803e-05 | 45.04% | 81.94% | 1.82x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.911650837265123e-05 | 4.791652742871274e-05 | 46.23% | 85.98% | 1.86x | ✅ |
| `hexbytes_new['0x']` | 7.925309169407405e-05 | 3.8817320598580017e-05 | 51.02% | 104.17% | 2.04x | ✅ |
| `hexbytes_new['0x1234']` | 8.779844168271462e-05 | 4.5761953834599945e-05 | 47.88% | 91.86% | 1.92x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.706850507562614e-05 | 4.515194311047666e-05 | 48.14% | 92.83% | 1.93x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.749245000932921e-05 | 4.523389115574031e-05 | 48.30% | 93.42% | 1.93x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.671552021812308e-05 | 4.5122331314790394e-05 | 47.97% | 92.18% | 1.92x | ✅ |
| `hexbytes_new['abc']` | 8.425913860537183e-05 | 4.7805436950995725e-05 | 43.26% | 76.25% | 1.76x | ✅ |
| `hexbytes_new['deadbeef']` | 7.84562098362536e-05 | 4.166220726700027e-05 | 46.90% | 88.32% | 1.88x | ✅ |
| `hexbytes_new[0-9]` | 4.28556452606466e-05 | 2.5692882627850992e-05 | 40.05% | 66.80% | 1.67x | ✅ |
| `hexbytes_new[0]` | 0.00012474755118191335 | 6.171997478028752e-05 | 50.52% | 102.12% | 2.02x | ✅ |
| `hexbytes_new[123456]` | 0.00012787313050592838 | 6.603270856883392e-05 | 48.36% | 93.65% | 1.94x | ✅ |
| `hexbytes_new[2**16]` | 0.0001295248762722574 | 6.620987569848285e-05 | 48.88% | 95.63% | 1.96x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013228373127495522 | 7.323928411970803e-05 | 44.63% | 80.62% | 1.81x | ✅ |
| `hexbytes_new[2**32]` | 0.00013187752914758114 | 6.950109213095438e-05 | 47.30% | 89.75% | 1.90x | ✅ |
| `hexbytes_new[2**64]` | 0.00013327424543330314 | 7.03773836098265e-05 | 47.19% | 89.37% | 1.89x | ✅ |
| `hexbytes_new[2**8]` | 0.00012774227503844322 | 6.38880487498028e-05 | 49.99% | 99.95% | 2.00x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.4758080257813586e-05 | 2.683203832202863e-05 | 40.05% | 66.81% | 1.67x | ✅ |
| `hexbytes_new[False]` | 6.127956993790677e-05 | 2.7221262513696547e-05 | 55.58% | 125.12% | 2.25x | ✅ |
| `hexbytes_new[True]` | 6.155627334832467e-05 | 2.742184828006349e-05 | 55.45% | 124.48% | 2.24x | ✅ |
| `hexbytes_new[all byte values]` | 4.3906020510470556e-05 | 2.673132032642837e-05 | 39.12% | 64.25% | 1.64x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.332924141570013e-05 | 2.6500480642950608e-05 | 38.84% | 63.50% | 1.64x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.307624582522411e-05 | 2.6449121098869468e-05 | 38.60% | 62.86% | 1.63x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.244354915060981e-05 | 2.5943614103351598e-05 | 38.88% | 63.60% | 1.64x | ✅ |
| `hexbytes_new[b'']` | 4.2870340433268206e-05 | 2.587861447753346e-05 | 39.64% | 65.66% | 1.66x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.2545296294554355e-05 | 2.601396188386437e-05 | 38.86% | 63.55% | 1.64x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.341328152883728e-05 | 2.5843937659995424e-05 | 40.47% | 67.98% | 1.68x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.365878819489504e-05 | 2.616465146585185e-05 | 40.07% | 66.86% | 1.67x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.6619258718827884e-05 | 3.87112463607314e-05 | 31.63% | 46.26% | 1.46x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2521058454531365e-05 | 2.573109238306721e-05 | 39.49% | 65.25% | 1.65x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.3413486114906635e-05 | 2.586971939551777e-05 | 40.41% | 67.82% | 1.68x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.252058637511886e-05 | 2.5986951110799986e-05 | 38.88% | 63.62% | 1.64x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.326736432302738e-05 | 2.577071587174136e-05 | 40.44% | 67.89% | 1.68x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.218579282390037e-05 | 2.5956887894586227e-05 | 38.47% | 62.52% | 1.63x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.262537069704275e-05 | 2.650370464543097e-05 | 37.82% | 60.83% | 1.61x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.044292102313201e-05 | 3.34640817238781e-05 | 33.66% | 50.74% | 1.51x | ✅ |
| `hexbytes_new[b'abc']` | 4.2900137216392965e-05 | 2.5925913023868535e-05 | 39.57% | 65.47% | 1.65x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.906607986234469e-05 | 3.7874560295216795e-05 | 45.16% | 82.35% | 1.82x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.93843871875042e-05 | 3.83811559491289e-05 | 44.68% | 80.78% | 1.81x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.954632631496069e-05 | 3.839926597970252e-05 | 44.79% | 81.11% | 1.81x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.889979744088365e-05 | 3.792740738609209e-05 | 44.95% | 81.66% | 1.82x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.967889405982446e-05 | 3.8243382035005417e-05 | 45.11% | 82.20% | 1.82x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.97207199085897e-05 | 3.824891737510209e-05 | 45.14% | 82.28% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.809382635983317e-05 | 3.5839801462740074e-05 | 47.37% | 89.99% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.978884233846239e-05 | 3.785670897428542e-05 | 45.76% | 84.35% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.674362871142371e-05 | 3.779986165303489e-05 | 43.37% | 76.57% | 1.77x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.964418062564019e-05 | 3.7996212853460504e-05 | 45.44% | 83.29% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.140422516765501e-05 | 5.887304156499643e-05 | 35.59% | 55.26% | 1.55x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 7.007369652304245e-05 | 3.8282263331658003e-05 | 45.37% | 83.04% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.936734767314666e-05 | 3.784370513872341e-05 | 45.44% | 83.30% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.989113842298264e-05 | 3.7387768895912875e-05 | 46.51% | 86.94% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.898433034161717e-05 | 3.714451150402546e-05 | 46.16% | 85.72% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 7.033888414554476e-05 | 3.808103348316487e-05 | 45.86% | 84.71% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.989064794287368e-05 | 3.781902376469925e-05 | 45.89% | 84.80% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.528760550816474e-05 | 4.9194793657747714e-05 | 42.32% | 73.37% | 1.73x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.942104883844072e-05 | 3.85806509014672e-05 | 44.43% | 79.94% | 1.80x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.412574362195108e-05 | 4.9698207791408785e-05 | 40.92% | 69.27% | 1.69x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 7.012119231823665e-05 | 3.8310178033101856e-05 | 45.37% | 83.04% | 1.83x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.94663534085963e-05 | 3.7700967304250555e-05 | 45.73% | 84.26% | 1.84x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.97793276722625e-05 | 3.800127079794938e-05 | 45.54% | 83.62% | 1.84x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.886457414248259e-05 | 3.8439871875736954e-05 | 44.18% | 79.15% | 1.79x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.877380251821758e-05 | 3.7934061943995404e-05 | 44.84% | 81.30% | 1.81x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.974715079965006e-05 | 3.831923792311477e-05 | 45.06% | 82.02% | 1.82x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 7.035107126799722e-05 | 3.8459857687038036e-05 | 45.33% | 82.92% | 1.83x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.96108512053388e-05 | 3.853289757243006e-05 | 44.65% | 80.65% | 1.81x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.909650547338195e-05 | 3.7956879718065085e-05 | 45.07% | 82.04% | 1.82x | ✅ |
| `hexbytes_new[long alternating]` | 5.1400620210745184e-05 | 3.357794156250179e-05 | 34.67% | 53.08% | 1.53x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.251081805192978e-05 | 4.313821858537775e-05 | 47.72% | 91.27% | 1.91x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.451330132567041e-05 | 4.423185913352297e-05 | 47.66% | 91.07% | 1.91x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.451013811298743e-05 | 4.397255485165664e-05 | 47.97% | 92.19% | 1.92x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.37795158629048e-05 | 4.292784569748672e-05 | 48.76% | 95.16% | 1.95x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.367538174714904e-05 | 4.2874018793083676e-05 | 48.76% | 95.17% | 1.95x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.404539571762466e-05 | 4.280514906657306e-05 | 49.07% | 96.34% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.185236840777431e-05 | 4.16538128755674e-05 | 49.11% | 96.51% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.338079989594445e-05 | 4.321954120272634e-05 | 48.17% | 92.92% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.404607001268841e-05 | 4.335939182000435e-05 | 48.41% | 93.84% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.27343671117872e-05 | 4.40691639236393e-05 | 46.73% | 87.74% | 1.88x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010709526745687384 | 6.36383067459254e-05 | 40.58% | 68.29% | 1.68x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.338126299021156e-05 | 4.332391223866216e-05 | 48.04% | 92.46% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.340514140570705e-05 | 4.280574919516216e-05 | 48.68% | 94.85% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.323929482130567e-05 | 4.286065182184037e-05 | 48.51% | 94.21% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.322206494041113e-05 | 4.2889578212197654e-05 | 48.46% | 94.04% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.351589531072054e-05 | 4.320686804157445e-05 | 48.27% | 93.29% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.371449542546742e-05 | 4.277394023460887e-05 | 48.90% | 95.71% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.872679095834207e-05 | 5.6582304579049876e-05 | 42.69% | 74.48% | 1.74x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.399160771473552e-05 | 4.333657351976363e-05 | 48.40% | 93.81% | 1.94x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.991812958257402e-05 | 5.619538428750685e-05 | 43.76% | 77.80% | 1.78x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.417713534491169e-05 | 4.335772863617686e-05 | 48.49% | 94.15% | 1.94x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.278166015623199e-05 | 4.2978809391953465e-05 | 48.08% | 92.61% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.375516096221392e-05 | 4.3210865645865395e-05 | 48.41% | 93.83% | 1.94x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.26821947705227e-05 | 4.303684464696589e-05 | 47.95% | 92.12% | 1.92x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.34971544545036e-05 | 4.299937859396546e-05 | 48.50% | 94.18% | 1.94x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.465996463684985e-05 | 4.3410058144882294e-05 | 48.72% | 95.02% | 1.95x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.322066947270844e-05 | 4.2991904874173016e-05 | 48.34% | 93.57% | 1.94x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.364997843055593e-05 | 4.352056874116773e-05 | 47.97% | 92.21% | 1.92x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.357154336354569e-05 | 4.301181812319568e-05 | 48.53% | 94.30% | 1.94x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.3113862827464375e-05 | 2.6671694771503373e-05 | 38.14% | 61.65% | 1.62x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.3506251386525345e-05 | 2.5715701775924732e-05 | 40.89% | 69.18% | 1.69x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.18420137906306e-05 | 2.5763098851936958e-05 | 38.43% | 62.41% | 1.62x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.297246002751995e-05 | 2.569029986704567e-05 | 40.22% | 67.27% | 1.67x | ✅ |
| `hexbytes_new[palindrome]` | 4.2559016300503736e-05 | 2.5764593299759012e-05 | 39.46% | 65.18% | 1.65x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.280312933168677e-05 | 2.651544713865571e-05 | 38.05% | 61.43% | 1.61x | ✅ |
| `hexbytes_new[single 0xff]` | 4.279203316853553e-05 | 2.582939808362729e-05 | 39.64% | 65.67% | 1.66x | ✅ |
| `hexbytes_new[single null byte]` | 4.244939004305577e-05 | 2.5783048094974435e-05 | 39.26% | 64.64% | 1.65x | ✅ |
| `hexbytes_new[two patterns]` | 4.246865150689807e-05 | 2.6333898184017908e-05 | 37.99% | 61.27% | 1.61x | ✅ |
| `hexbytes_repr[0-9]` | 2.9081576337659995e-05 | 1.4664519294403055e-05 | 49.57% | 98.31% | 1.98x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00011991200439150581 | 4.062101343693802e-05 | 66.12% | 195.20% | 2.95x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012044456149638098 | 4.069756732378114e-05 | 66.21% | 195.95% | 2.96x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.878031113416404e-05 | 1.9767152120154237e-05 | 59.48% | 146.77% | 2.47x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.8910532080103194e-05 | 1.9961280513647024e-05 | 59.19% | 145.03% | 2.45x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.1216659070534225e-05 | 1.7867757008815232e-05 | 56.65% | 130.68% | 2.31x | ✅ |
| `hexbytes_repr[b'']` | 2.127946838463136e-05 | 1.2301194861325189e-05 | 42.19% | 72.99% | 1.73x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.6336229941332385e-05 | 1.6816789568661893e-05 | 53.72% | 116.07% | 2.16x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.6151963785176962e-05 | 1.4018489197992865e-05 | 46.40% | 86.55% | 1.87x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.232964960845315e-05 | 2.3647657586363877e-05 | 62.06% | 163.58% | 2.64x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.000760326296093794 | 0.00022230623080220978 | 70.76% | 242.02% | 3.42x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.6437218437017458e-05 | 1.377102083588496e-05 | 47.91% | 91.98% | 1.92x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.6732484229175546e-05 | 1.4357288530563941e-05 | 46.29% | 86.19% | 1.86x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8229206511741545e-05 | 1.441512537734005e-05 | 48.94% | 95.83% | 1.96x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8335632189979137e-05 | 1.441671962367154e-05 | 49.12% | 96.55% | 1.97x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6243570098338748e-05 | 1.4088788958869635e-05 | 46.32% | 86.27% | 1.86x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.9089968007704115e-05 | 2.009983078616432e-05 | 59.06% | 144.23% | 2.44x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0003948453817667127 | 0.00011875717497098101 | 69.92% | 232.48% | 3.32x | ✅ |
| `hexbytes_repr[b'abc']` | 2.6405582756427917e-05 | 1.4169482449929676e-05 | 46.34% | 86.36% | 1.86x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00039868238862693486 | 0.0001221476461730028 | 69.36% | 226.39% | 3.26x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.764310473900077e-05 | 3.389791422335644e-05 | 65.28% | 188.05% | 2.88x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.8787547703654546e-05 | 1.4616910525643847e-05 | 49.22% | 96.95% | 1.97x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.7487786824816306e-05 | 1.4143793379295303e-05 | 48.55% | 94.35% | 1.94x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.7004602538957043e-05 | 1.4018497928147865e-05 | 48.09% | 92.64% | 1.93x | ✅ |
| `hexbytes_repr[palindrome]` | 3.298689778503352e-05 | 1.570064988020303e-05 | 52.40% | 110.10% | 2.10x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.238699623592775e-05 | 2.374887896770445e-05 | 61.93% | 162.69% | 2.63x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.5572202625784365e-05 | 1.3645125377078869e-05 | 46.64% | 87.41% | 1.87x | ✅ |
| `hexbytes_repr[single null byte]` | 2.552249465260036e-05 | 1.3555824245217812e-05 | 46.89% | 88.28% | 1.88x | ✅ |
| `hexbytes_repr[two patterns]` | 4.876717353842904e-05 | 1.9868824589239213e-05 | 59.26% | 145.45% | 2.45x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.548860645994586e-05 | 1.3583783000495032e-05 | 12.30% | 14.02% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.224923286128761e-05 | 3.959185338255332e-05 | 6.29% | 6.71% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.237675016264869e-05 | 3.994481816366139e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0651724835056945e-05 | 1.8855489453634037e-05 | 8.70% | 9.53% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.0666312634078766e-05 | 1.90291553009088e-05 | 7.92% | 8.60% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.885591554952511e-05 | 1.6886468447461706e-05 | 10.44% | 11.66% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0113331859810333e-05 | 1.1329377509148292e-05 | -12.02% | -10.73% | 0.89x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7509263556778708e-05 | 1.5890228077559194e-05 | 9.25% | 10.19% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.5060604755577923e-05 | 1.3157490301736888e-05 | 12.64% | 14.46% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5318641333511387e-05 | 2.2736457572393604e-05 | 10.20% | 11.36% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022282074429398095 | 0.00022226689442239698 | 0.25% | 0.25% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4933651896112013e-05 | 1.3088169225513853e-05 | 12.36% | 14.10% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.4982687255277559e-05 | 1.3168805807360716e-05 | 12.11% | 13.77% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.535769072802968e-05 | 1.3472834429627337e-05 | 12.27% | 13.99% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5395607225641e-05 | 1.3323043202113142e-05 | 13.46% | 15.56% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.4922319175842737e-05 | 1.3000869134049428e-05 | 12.88% | 14.78% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.053629237514755e-05 | 1.90157043934754e-05 | 7.40% | 8.00% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012220160978314385 | 0.00012334722523166356 | -0.94% | -0.93% | 0.99x | ❌ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4815642987851134e-05 | 1.3279840203784984e-05 | 10.37% | 11.56% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012207887293778214 | 0.00012187051549276197 | 0.17% | 0.17% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.5110387566824677e-05 | 3.312241556010431e-05 | 5.66% | 6.00% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.55208847577036e-05 | 1.364670994594979e-05 | 12.08% | 13.73% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5246010959354451e-05 | 1.3225274896744732e-05 | 13.25% | 15.28% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.5033966183735386e-05 | 1.3097871066554161e-05 | 12.88% | 14.78% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7307251706594826e-05 | 1.4703040443180693e-05 | 15.05% | 17.71% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5418443286495465e-05 | 2.279005847809113e-05 | 10.34% | 11.53% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4783393191665527e-05 | 1.2880118127140894e-05 | 12.87% | 14.78% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.478279242443052e-05 | 1.2574041758941967e-05 | 14.94% | 17.57% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.065205829015664e-05 | 1.878852904699962e-05 | 9.02% | 9.92% | 1.10x | ✅ |
