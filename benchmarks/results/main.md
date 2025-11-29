#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/actions-checkout-6.x/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/actions-checkout-6.x/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.662631389667058e-05 | 2.3678270212478785e-05 | 11.07% | 12.45% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6544416327148756e-05 | 2.3557996430766367e-05 | 11.25% | 12.68% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6628232225551692e-05 | 2.3450773029755812e-05 | 11.93% | 13.55% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.6697929772196777e-05 | 2.3530528866568005e-05 | 11.86% | 13.46% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.658887569764667e-05 | 2.3567347563997856e-05 | 11.36% | 12.82% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.661090258637162e-05 | 2.35975188569406e-05 | 11.32% | 12.77% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.6567462607305386e-05 | 2.3525085866971264e-05 | 11.45% | 12.93% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.6734483926971454e-05 | 2.3492260793526773e-05 | 12.13% | 13.80% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.6578301863787363e-05 | 2.38542866247006e-05 | 10.25% | 11.42% | 1.11x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6435312386911996e-05 | 2.363256529742046e-05 | 10.60% | 11.86% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.649423509115884e-05 | 2.346131959829248e-05 | 11.45% | 12.93% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.655564049376186e-05 | 2.3532136065112056e-05 | 11.39% | 12.85% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.6656547674703965e-05 | 2.338819652473901e-05 | 12.26% | 13.97% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6557576712123227e-05 | 2.3854437202801288e-05 | 10.18% | 11.33% | 1.11x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.6548815336579716e-05 | 2.3444840869970063e-05 | 11.69% | 13.24% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.6968186131092577e-05 | 2.3434867044937515e-05 | 13.10% | 15.08% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.653485168335309e-05 | 2.3486586433718492e-05 | 11.49% | 12.98% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.637086466355513e-05 | 2.3577166273024715e-05 | 10.59% | 11.85% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.6542418970034235e-05 | 2.3225183057949142e-05 | 12.50% | 14.28% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6533083664672936e-05 | 2.3525044677957293e-05 | 11.34% | 12.79% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.645443872360501e-05 | 2.3479988201766232e-05 | 11.24% | 12.67% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6555956037625896e-05 | 2.3372956648965613e-05 | 11.99% | 13.62% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6487709961532857e-05 | 2.336402038988751e-05 | 11.79% | 13.37% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.663281646901743e-05 | 2.354128297339846e-05 | 11.61% | 13.13% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6502008648356653e-05 | 2.3724461952977653e-05 | 10.48% | 11.71% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6531831195830508e-05 | 2.3445286152444835e-05 | 11.63% | 13.16% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6280102947965263e-05 | 2.2673549871716175e-05 | 13.72% | 15.91% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.6003231889673308e-05 | 2.2921559802317484e-05 | 11.85% | 13.44% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.608620757441111e-05 | 2.289881773712692e-05 | 12.22% | 13.92% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.617927350238025e-05 | 2.266886897293659e-05 | 13.41% | 15.49% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6292572660481513e-05 | 2.2756728130744016e-05 | 13.45% | 15.54% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6302642555938467e-05 | 2.2614116036609548e-05 | 14.02% | 16.31% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.6207734717019312e-05 | 2.277055407722951e-05 | 13.12% | 15.09% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.6085106517070123e-05 | 2.274716282238888e-05 | 12.80% | 14.67% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.617688487463157e-05 | 2.311509760399964e-05 | 11.70% | 13.25% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.616553254354985e-05 | 2.2813217654646425e-05 | 12.81% | 14.69% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.583291937004257e-05 | 2.306364754221129e-05 | 10.72% | 12.01% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6218290591153152e-05 | 2.3144256054996847e-05 | 11.72% | 13.28% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6201465623394932e-05 | 2.2813403936870226e-05 | 12.93% | 14.85% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6121752800364877e-05 | 2.2840208889405913e-05 | 12.56% | 14.37% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6180536248536478e-05 | 2.280260047961807e-05 | 12.90% | 14.81% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.616865920643297e-05 | 2.2687921454487133e-05 | 13.30% | 15.34% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.62358496045547e-05 | 2.274985676710544e-05 | 13.29% | 15.32% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.6249649075993303e-05 | 2.2919657159100464e-05 | 12.69% | 14.53% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6216462609920973e-05 | 2.2771966374658067e-05 | 13.14% | 15.13% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.615020809539494e-05 | 2.273914438078662e-05 | 13.04% | 15.00% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.619665373178384e-05 | 2.263260119905081e-05 | 13.60% | 15.75% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.587752869356804e-05 | 2.2771188118394617e-05 | 12.00% | 13.64% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.609347712352068e-05 | 2.2748826244630524e-05 | 12.82% | 14.70% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6169120363569077e-05 | 2.2788531194849283e-05 | 12.92% | 14.83% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.6325044986390816e-05 | 2.27423523677554e-05 | 13.61% | 15.75% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.6328821358506815e-05 | 2.284127875101155e-05 | 13.25% | 15.27% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.606615966920288e-05 | 2.2845940383768237e-05 | 12.35% | 14.10% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.6242879676640305e-05 | 2.2743176501786598e-05 | 13.34% | 15.39% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.601192480239634e-05 | 2.3021709944862195e-05 | 11.50% | 12.99% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6045089199161894e-05 | 2.2834601936036424e-05 | 12.33% | 14.06% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.555541354647698e-05 | 2.2750119736201484e-05 | 10.98% | 12.33% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.5967574381694023e-05 | 2.267368217585035e-05 | 12.68% | 14.53% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.6068458794411457e-05 | 2.3142713977685042e-05 | 11.22% | 12.64% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.592573495856464e-05 | 2.2599734050835068e-05 | 12.83% | 14.72% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.615823715459974e-05 | 2.26169409237152e-05 | 13.54% | 15.66% | 1.16x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.6151279223519415e-05 | 2.2843195573369512e-05 | 12.65% | 14.48% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.612396595453528e-05 | 2.2912069154288663e-05 | 12.29% | 14.02% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.6022136119220675e-05 | 2.3108131391326194e-05 | 11.20% | 12.61% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.588652524414179e-05 | 2.3298745464552686e-05 | 10.00% | 11.11% | 1.11x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.606759296741013e-05 | 2.2811282408286408e-05 | 12.49% | 14.27% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.609810024791053e-05 | 2.2874028687095364e-05 | 12.35% | 14.09% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.608115408546757e-05 | 2.2811091300571608e-05 | 12.54% | 14.34% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.6057352299155487e-05 | 2.2828615107594893e-05 | 12.39% | 14.14% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6057829141381396e-05 | 2.2570338860173715e-05 | 13.38% | 15.45% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.61109926794363e-05 | 2.302078693615711e-05 | 11.83% | 13.42% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.6177706898639637e-05 | 2.2698837340132553e-05 | 13.29% | 15.33% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.6104390608363176e-05 | 2.2658235789815792e-05 | 13.20% | 15.21% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6001343833217717e-05 | 2.2517843846266007e-05 | 13.40% | 15.47% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.5926239889256434e-05 | 2.2569265884050298e-05 | 12.95% | 14.87% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.611400416848675e-05 | 2.2760163718274373e-05 | 12.84% | 14.74% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.6052954863920118e-05 | 2.2820702359034815e-05 | 12.41% | 14.16% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.5944416376508448e-05 | 2.3095892177615655e-05 | 10.98% | 12.33% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.5819046550904564e-05 | 2.3072498604517996e-05 | 10.64% | 11.90% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.5913940535552297e-05 | 2.273562664638397e-05 | 12.26% | 13.98% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.594882609276358e-05 | 2.299291295456023e-05 | 11.39% | 12.86% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6538820118155213e-05 | 2.3136907239481237e-05 | 12.82% | 14.70% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.6499096932743575e-05 | 2.295514387443257e-05 | 13.37% | 15.44% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.5552184482510254e-05 | 2.275480568893465e-05 | 10.95% | 12.29% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6142382471783257e-05 | 2.299015088395713e-05 | 12.06% | 13.71% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.585958147536432e-05 | 2.2986787361540224e-05 | 11.11% | 12.50% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.597305922389803e-05 | 2.2731127416135595e-05 | 12.48% | 14.26% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.5661286462589293e-05 | 2.2943390215020558e-05 | 10.59% | 11.85% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.6091849742647643e-05 | 2.279360398555261e-05 | 12.64% | 14.47% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6436497611154307e-05 | 2.280251890429659e-05 | 13.75% | 15.94% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.577966880857404e-05 | 2.2805627468216375e-05 | 11.54% | 13.04% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6065323225370706e-05 | 2.289368769771711e-05 | 12.17% | 13.85% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.5859324845009783e-05 | 2.2641034563907043e-05 | 12.45% | 14.21% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.618150848263484e-05 | 2.2485345377760228e-05 | 14.12% | 16.44% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.5991001706710025e-05 | 2.3106903989071782e-05 | 11.10% | 12.48% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.5876652683315883e-05 | 2.277271712992565e-05 | 12.00% | 13.63% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.5991213505609228e-05 | 2.2691549265046853e-05 | 12.70% | 14.54% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.5988866036322418e-05 | 2.2806401307355705e-05 | 12.25% | 13.95% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.6367219828804272e-05 | 2.2788379310808416e-05 | 13.57% | 15.70% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.596425432245317e-05 | 2.2960380383043762e-05 | 11.57% | 13.08% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.644882197038254e-05 | 2.31789456013078e-05 | 12.36% | 14.11% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.6528147338838593e-05 | 2.295541702037435e-05 | 13.47% | 15.56% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.566050667960146e-05 | 2.3155971134209837e-05 | 9.76% | 10.82% | 1.11x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.58511090803879e-05 | 2.3017360389703604e-05 | 10.96% | 12.31% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.5746256133505366e-05 | 2.3063284641299713e-05 | 10.42% | 11.63% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6075516449545808e-05 | 2.2945878918983978e-05 | 12.00% | 13.64% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.5984076014423157e-05 | 2.2817400279324645e-05 | 12.19% | 13.88% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.591413708076077e-05 | 2.2706001934222736e-05 | 12.38% | 14.13% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6397237906421968e-05 | 2.3030080993363324e-05 | 12.76% | 14.62% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.6104768494156142e-05 | 2.2994710957565617e-05 | 11.91% | 13.53% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.6054818835173828e-05 | 2.2928317177091823e-05 | 12.00% | 13.64% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6122431941520808e-05 | 2.2666880151871313e-05 | 13.23% | 15.24% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.5913288337488994e-05 | 2.278549347879568e-05 | 12.07% | 13.73% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.593050677984273e-05 | 2.2828274435287977e-05 | 11.96% | 13.59% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.5937800604708762e-05 | 2.2713993279077336e-05 | 12.43% | 14.19% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.5948680647780325e-05 | 2.2885082035835328e-05 | 11.81% | 13.39% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.661431487437406e-05 | 2.2996105671402186e-05 | 13.59% | 15.73% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.590992457306091e-05 | 2.2702223221725037e-05 | 12.38% | 14.13% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.6062042357449696e-05 | 2.273735993659561e-05 | 12.76% | 14.62% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.569121502083437e-05 | 2.283718874717943e-05 | 11.11% | 12.50% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.586840343037027e-05 | 2.298358511814536e-05 | 11.15% | 12.55% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.5724029595489213e-05 | 2.315217254071303e-05 | 10.00% | 11.11% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.5937140867026014e-05 | 2.299459685151893e-05 | 11.34% | 12.80% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6168928564950433e-05 | 2.3041737969220805e-05 | 11.95% | 13.57% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6085486969133243e-05 | 2.283517224966177e-05 | 12.46% | 14.23% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.59671664187044e-05 | 2.3242029251026316e-05 | 10.49% | 11.73% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.609744625911539e-05 | 2.295240376985339e-05 | 12.05% | 13.70% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.5873094515228998e-05 | 2.279906324760276e-05 | 11.88% | 13.48% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.60721573954717e-05 | 2.288640407353322e-05 | 12.22% | 13.92% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.6066898288789948e-05 | 2.2982659659464075e-05 | 11.83% | 13.42% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.586303375019921e-05 | 2.299468392439412e-05 | 11.09% | 12.47% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.5913699382167584e-05 | 2.274885345522997e-05 | 12.21% | 13.91% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.5857862455515957e-05 | 2.2767467270565683e-05 | 11.95% | 13.57% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6122378549585848e-05 | 2.2700110644006093e-05 | 13.10% | 15.08% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.614485351146565e-05 | 2.2801695556083153e-05 | 12.79% | 14.66% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.5992467939346906e-05 | 2.2753029892342105e-05 | 12.46% | 14.24% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.5971517250956916e-05 | 2.293919311846489e-05 | 11.68% | 13.22% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.593815606625408e-05 | 2.312660406582207e-05 | 10.84% | 12.16% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.605700299517442e-05 | 2.2727574745692744e-05 | 12.78% | 14.65% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.584894795995116e-05 | 2.2833287705818614e-05 | 11.67% | 13.21% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.5958857756726494e-05 | 2.2883173317548526e-05 | 11.85% | 13.44% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.5984916453129297e-05 | 2.275100784012811e-05 | 12.45% | 14.21% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.600840345862985e-05 | 2.282641636992964e-05 | 12.23% | 13.94% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.585921777734684e-05 | 2.3051034957846303e-05 | 10.86% | 12.18% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6056050800145167e-05 | 2.295163773033305e-05 | 11.91% | 13.53% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.5764080085326672e-05 | 2.2931177903775253e-05 | 11.00% | 12.35% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.5956981330431067e-05 | 2.3220753845344758e-05 | 10.54% | 11.78% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.583236727620376e-05 | 2.290450851938323e-05 | 11.33% | 12.78% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.5716466346147563e-05 | 2.2909764587593176e-05 | 10.91% | 12.25% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.6020709730190557e-05 | 2.266359013769639e-05 | 12.90% | 14.81% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.6093676678167563e-05 | 2.282031423296987e-05 | 12.54% | 14.34% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.602223680007757e-05 | 2.2727542396470404e-05 | 12.66% | 14.50% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6192739659433514e-05 | 2.30929984212559e-05 | 11.83% | 13.42% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.5998706815938133e-05 | 2.2944518486683037e-05 | 11.75% | 13.31% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.602214564862896e-05 | 2.297491059433445e-05 | 11.71% | 13.26% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6003220832098537e-05 | 2.2904666118013375e-05 | 11.92% | 13.53% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.6072770964918107e-05 | 2.3112622194033608e-05 | 11.35% | 12.81% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.5915772976747427e-05 | 2.3037682571876604e-05 | 11.11% | 12.49% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.589853763542119e-05 | 2.295405116630564e-05 | 11.37% | 12.83% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.601907755623238e-05 | 2.307367189586834e-05 | 11.32% | 12.77% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.603927832718022e-05 | 2.3298330686674952e-05 | 10.53% | 11.76% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.619964746242123e-05 | 2.2850327609482002e-05 | 12.78% | 14.66% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.5820486867613398e-05 | 2.29936924935321e-05 | 10.95% | 12.29% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.5979642112049228e-05 | 2.2955691254305803e-05 | 11.64% | 13.17% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6070809666433423e-05 | 2.297546033330421e-05 | 11.87% | 13.47% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.5991050347889343e-05 | 2.330004264863489e-05 | 10.35% | 11.55% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6006406144506828e-05 | 2.283183466373869e-05 | 12.21% | 13.90% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.567322017645875e-05 | 2.2915258411377843e-05 | 10.74% | 12.04% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6616515378650723e-05 | 2.2935426473319607e-05 | 13.83% | 16.05% | 1.16x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.5854968811895207e-05 | 2.2734833358334078e-05 | 12.07% | 13.72% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.6006586952338073e-05 | 2.2934498235440004e-05 | 11.81% | 13.40% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.5857251727975453e-05 | 2.2637290229484204e-05 | 12.45% | 14.22% | 1.14x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 7.85711480850737e-05 | 5.665920317302488e-05 | 27.89% | 38.67% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 7.939830569347475e-05 | 5.84530472412915e-05 | 26.38% | 35.83% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 7.893901491694119e-05 | 5.724388475187067e-05 | 27.48% | 37.90% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 7.991652359870069e-05 | 5.626736472623749e-05 | 29.59% | 42.03% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 7.922332175740713e-05 | 5.625421136851779e-05 | 28.99% | 40.83% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 7.875719809076717e-05 | 5.685568638280493e-05 | 27.81% | 38.52% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.778023598984398e-05 | 5.4295704312080176e-05 | 30.19% | 43.25% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 7.888662433842097e-05 | 5.646308493284252e-05 | 28.43% | 39.71% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 7.779270082613784e-05 | 5.688530052480357e-05 | 26.88% | 36.75% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 7.94410818807702e-05 | 5.6069759361118e-05 | 29.42% | 41.68% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 7.916689815442787e-05 | 5.673097165227631e-05 | 28.34% | 39.55% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 7.916785618516641e-05 | 5.669553435027721e-05 | 28.39% | 39.64% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.925986863881112e-05 | 5.644842420008465e-05 | 28.78% | 40.41% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 7.863415057380819e-05 | 5.6339255689387906e-05 | 28.35% | 39.57% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 7.919322645468383e-05 | 5.660881336753709e-05 | 28.52% | 39.90% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 7.858597318100203e-05 | 5.6432775017467396e-05 | 28.19% | 39.26% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 7.87113982649138e-05 | 5.696810586199989e-05 | 27.62% | 38.17% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.156462660315008e-05 | 5.689764339072504e-05 | 30.24% | 43.35% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 7.875084434395152e-05 | 5.671796336578821e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 7.913574843166376e-05 | 5.726039613610365e-05 | 27.64% | 38.20% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 7.95272370821408e-05 | 5.6001586314705135e-05 | 29.58% | 42.01% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 7.890054954815188e-05 | 5.6418663553025014e-05 | 28.49% | 39.85% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.323929135780291e-05 | 5.717910540119608e-05 | 31.31% | 45.58% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 7.902194368242318e-05 | 5.7152709273434125e-05 | 27.67% | 38.26% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 7.903423553124985e-05 | 5.6126752991732766e-05 | 28.98% | 40.81% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 7.870350452960468e-05 | 5.64365809462672e-05 | 28.29% | 39.45% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.825051966748787e-05 | 5.4268088408701654e-05 | 30.65% | 44.19% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.721052472934071e-05 | 5.431176321172102e-05 | 29.66% | 42.16% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 7.852381702540869e-05 | 5.655594842224205e-05 | 27.98% | 38.84% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 7.957288385641642e-05 | 5.7661678323688054e-05 | 27.54% | 38.00% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.195497069320063e-05 | 5.7844894189495456e-05 | 29.42% | 41.68% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.029683112487462e-05 | 5.76494743745523e-05 | 28.20% | 39.28% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.073264845313731e-05 | 5.795965433962537e-05 | 28.21% | 39.29% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 7.983902961529418e-05 | 5.795622275440093e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 7.918144469943935e-05 | 5.734339472715894e-05 | 27.58% | 38.08% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.871458665350612e-05 | 5.5173587220848636e-05 | 29.91% | 42.67% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 7.938562292549352e-05 | 5.720965375578546e-05 | 27.93% | 38.76% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 7.885868716340782e-05 | 5.734576711151198e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.059464805842417e-05 | 5.7652835883268644e-05 | 28.47% | 39.79% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 7.849366956395262e-05 | 5.7430572863165254e-05 | 26.83% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 7.905960048948145e-05 | 5.7781060467390956e-05 | 26.91% | 36.83% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.98607509582467e-05 | 5.755427836206121e-05 | 27.93% | 38.76% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 7.940862816075175e-05 | 5.746736753952775e-05 | 27.63% | 38.18% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 7.839769750891479e-05 | 5.7333035581720074e-05 | 26.87% | 36.74% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 7.948820818113637e-05 | 5.7282094329246554e-05 | 27.94% | 38.77% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 7.98687627793751e-05 | 5.723739506146161e-05 | 28.34% | 39.54% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 7.859782290295236e-05 | 5.765960544296313e-05 | 26.64% | 36.31% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 7.87336087952237e-05 | 5.764850529646062e-05 | 26.78% | 36.58% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 7.957785439987823e-05 | 5.753625905190221e-05 | 27.70% | 38.31% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 7.920189063907658e-05 | 5.75994458346998e-05 | 27.28% | 37.50% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 7.828121209876e-05 | 5.7587951413580775e-05 | 26.43% | 35.93% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 7.972208070940149e-05 | 5.741442416073019e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 7.879791842252519e-05 | 5.7480246445737216e-05 | 27.05% | 37.09% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 7.964011257208259e-05 | 5.714122085534395e-05 | 28.25% | 39.37% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 7.879060037716875e-05 | 5.754799123515171e-05 | 26.96% | 36.91% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.751674767659867e-05 | 5.488480677424751e-05 | 29.20% | 41.24% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.849452202486815e-05 | 5.4616622479059536e-05 | 30.42% | 43.72% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 7.927989152059888e-05 | 5.7188956044347735e-05 | 27.86% | 38.63% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 7.963053488596164e-05 | 5.760585887987993e-05 | 27.66% | 38.23% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.128300620771726e-05 | 5.776264428199955e-05 | 28.94% | 40.72% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.130601365740946e-05 | 5.786983544463199e-05 | 28.82% | 40.50% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 7.969248679638149e-05 | 5.799724297390138e-05 | 27.22% | 37.41% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.957269451895996e-05 | 5.8167386731741595e-05 | 26.90% | 36.80% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 7.923205968903623e-05 | 5.7625677656693155e-05 | 27.27% | 37.49% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.836785370348776e-05 | 5.4485574880547806e-05 | 30.47% | 43.83% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 7.986741678867685e-05 | 5.803489299048449e-05 | 27.34% | 37.62% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.009484661454531e-05 | 5.7852401208799034e-05 | 27.77% | 38.45% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 7.849534334308473e-05 | 5.775195062948029e-05 | 26.43% | 35.92% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 7.879149292394692e-05 | 5.750178736198864e-05 | 27.02% | 37.02% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.06221574604324e-05 | 5.725736935047276e-05 | 28.98% | 40.81% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.860857737036985e-05 | 5.7877002236927117e-05 | 26.37% | 35.82% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.042154016655445e-05 | 5.786388191613389e-05 | 28.05% | 38.98% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 7.881867151803321e-05 | 5.7149733898387345e-05 | 27.49% | 37.92% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 7.715751709457551e-05 | 5.739527372720426e-05 | 25.61% | 34.43% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 7.92165567023436e-05 | 5.744704050766648e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 7.952671110468288e-05 | 5.782945872673849e-05 | 27.28% | 37.52% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 7.929996038271818e-05 | 5.7089472589984685e-05 | 28.01% | 38.90% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 7.902992232610112e-05 | 5.784773804828183e-05 | 26.80% | 36.62% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 7.991701671791454e-05 | 5.826684007864554e-05 | 27.09% | 37.16% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 7.879214422488685e-05 | 5.751948420141225e-05 | 27.00% | 36.98% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 7.987045249483384e-05 | 5.7515410920556345e-05 | 27.99% | 38.87% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 7.833162134722536e-05 | 5.7255168189489076e-05 | 26.91% | 36.81% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 7.946394257452533e-05 | 5.8056977244447075e-05 | 26.94% | 36.87% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 7.91889332363244e-05 | 5.766596661455757e-05 | 27.18% | 37.32% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.790464206198477e-05 | 5.8319501416389897e-05 | 25.14% | 33.58% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.959622696678749e-05 | 5.4998833983293494e-05 | 30.90% | 44.72% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 7.910717457984988e-05 | 5.739334212091274e-05 | 27.45% | 37.83% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 7.785856818424446e-05 | 5.63210395660013e-05 | 27.66% | 38.24% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 7.84632702332606e-05 | 5.640724372115161e-05 | 28.11% | 39.10% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.158991301060942e-05 | 5.6374957836918375e-05 | 30.90% | 44.73% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 7.788724189303327e-05 | 5.6315254476986675e-05 | 27.70% | 38.31% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 7.787735227242721e-05 | 5.641846297509195e-05 | 27.55% | 38.04% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 7.775990155453681e-05 | 5.708243210073582e-05 | 26.59% | 36.22% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.804913950700622e-05 | 5.39474536483324e-05 | 30.88% | 44.68% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 7.8849635894651e-05 | 5.614314108824367e-05 | 28.80% | 40.44% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 7.824430986316545e-05 | 5.6232036614395977e-05 | 28.13% | 39.15% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 7.836219484699414e-05 | 5.671710820264479e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010081205592498411 | 7.647275942082643e-05 | 24.14% | 31.83% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.739226468700126e-05 | 5.360875821450344e-05 | 30.73% | 44.36% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.930477397772968e-05 | 5.615315275770584e-05 | 29.19% | 41.23% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 7.934644563522353e-05 | 5.61359084803373e-05 | 29.25% | 41.35% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 7.85488147155819e-05 | 5.624133911515192e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 7.774349834342483e-05 | 5.645150709993294e-05 | 27.39% | 37.72% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 7.87146330285761e-05 | 5.637482626521581e-05 | 28.38% | 39.63% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.536461150771803e-05 | 7.16739295698504e-05 | 24.84% | 33.05% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.715471058239208e-05 | 5.342905840991119e-05 | 30.75% | 44.41% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.499206008346423e-05 | 7.164926327063922e-05 | 24.57% | 32.58% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 7.798934543781663e-05 | 5.647895463832956e-05 | 27.58% | 38.09% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.840945658786866e-05 | 5.64291241382799e-05 | 28.03% | 38.95% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.789446620120473e-05 | 5.6574745285670415e-05 | 27.37% | 37.68% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 7.842001148795348e-05 | 5.651134698977955e-05 | 27.94% | 38.77% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 7.842053272670665e-05 | 5.6147367825456484e-05 | 28.40% | 39.67% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 7.848248733604115e-05 | 5.738451526215781e-05 | 26.88% | 36.77% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.794638502746109e-05 | 5.715678997005967e-05 | 26.67% | 36.37% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.733592732570295e-05 | 5.434921096056179e-05 | 29.72% | 42.29% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 7.797949011128918e-05 | 5.6672550614452194e-05 | 27.32% | 37.60% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.66781901406285e-05 | 5.577946428031225e-05 | 27.26% | 37.47% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.816388822931367e-05 | 5.5878822728639504e-05 | 28.51% | 39.88% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.916938054492221e-05 | 5.62614476144481e-05 | 28.94% | 40.72% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.75534776013948e-05 | 5.642027812563548e-05 | 27.25% | 37.46% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.672194652793772e-05 | 5.601322379108483e-05 | 26.99% | 36.97% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.726760530299278e-05 | 5.5661776924905305e-05 | 27.96% | 38.82% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.641376801765688e-05 | 5.371347250061733e-05 | 29.71% | 42.26% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.682159940965219e-05 | 5.640968024639854e-05 | 26.57% | 36.19% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.705502371984491e-05 | 5.60030224333828e-05 | 27.32% | 37.59% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.572231974299203e-05 | 5.6740911076757984e-05 | 25.07% | 33.45% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010016850471439588 | 7.758932306878263e-05 | 22.54% | 29.10% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.814122157541555e-05 | 5.647207753268157e-05 | 27.73% | 38.37% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.76907700478216e-05 | 5.59385214572947e-05 | 28.00% | 38.89% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.759808382646619e-05 | 5.557961310437386e-05 | 28.38% | 39.62% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.740330684150357e-05 | 5.591691463995781e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.718238813719942e-05 | 5.624751692570143e-05 | 27.12% | 37.22% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.830256771929258e-05 | 5.669847860355083e-05 | 27.59% | 38.10% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.428546720265156e-05 | 7.176819892399046e-05 | 23.88% | 31.37% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.770532021024111e-05 | 5.660848578809094e-05 | 27.15% | 37.27% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.448077338331585e-05 | 7.163837908209271e-05 | 24.18% | 31.89% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.725350083613099e-05 | 5.589823108681615e-05 | 27.64% | 38.20% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.693864522255194e-05 | 5.576071048054831e-05 | 27.53% | 37.98% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.622181962521529e-05 | 5.625123324615859e-05 | 26.20% | 35.50% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.71997593752574e-05 | 5.601263400271408e-05 | 27.44% | 37.83% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.82246708476585e-05 | 5.7054258060327433e-05 | 27.06% | 37.11% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.717441659552395e-05 | 5.678143138319325e-05 | 26.42% | 35.91% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.599817492790057e-05 | 5.3607215953610656e-05 | 29.46% | 41.77% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.605236523788204e-05 | 5.331999203384769e-05 | 29.89% | 42.63% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.750247785473861e-05 | 5.6276157682928504e-05 | 27.39% | 37.72% | 1.38x | ✅ |
| `hexbytes_new['']` | 7.196805416303124e-05 | 3.3384524103376317e-05 | 53.61% | 115.57% | 2.16x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.244165207883885e-05 | 4.756036968161403e-05 | 48.55% | 94.37% | 1.94x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.238690120678152e-05 | 4.779701079541527e-05 | 48.26% | 93.29% | 1.93x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 9.026813405671402e-05 | 4.469090315566988e-05 | 50.49% | 101.98% | 2.02x | ✅ |
| `hexbytes_new['0x']` | 7.715810872730253e-05 | 3.542355868072944e-05 | 54.09% | 117.82% | 2.18x | ✅ |
| `hexbytes_new['0x1234']` | 8.658719490123223e-05 | 4.200557553735515e-05 | 51.49% | 106.13% | 2.06x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.521043040444253e-05 | 4.20158140616838e-05 | 50.69% | 102.81% | 2.03x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.65435071722315e-05 | 4.1629230741140635e-05 | 51.90% | 107.89% | 2.08x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.62208263127057e-05 | 4.184138955426012e-05 | 51.47% | 106.07% | 2.06x | ✅ |
| `hexbytes_new['abc']` | 8.391551299476444e-05 | 4.361518727251293e-05 | 48.02% | 92.40% | 1.92x | ✅ |
| `hexbytes_new['deadbeef']` | 7.772217746181663e-05 | 3.8486833228098894e-05 | 50.48% | 101.94% | 2.02x | ✅ |
| `hexbytes_new[0-9]` | 4.227663345334012e-05 | 2.4348192909092937e-05 | 42.41% | 73.63% | 1.74x | ✅ |
| `hexbytes_new[0]` | 0.0001221453589095798 | 5.87825416925223e-05 | 51.87% | 107.79% | 2.08x | ✅ |
| `hexbytes_new[123456]` | 0.000126723823584788 | 6.425194664620976e-05 | 49.30% | 97.23% | 1.97x | ✅ |
| `hexbytes_new[2**16]` | 0.00012609925896070047 | 6.218329820749275e-05 | 50.69% | 102.79% | 2.03x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013325764432122538 | 6.749472369262175e-05 | 49.35% | 97.43% | 1.97x | ✅ |
| `hexbytes_new[2**32]` | 0.00013049246939595156 | 6.52236626756279e-05 | 50.02% | 100.07% | 2.00x | ✅ |
| `hexbytes_new[2**64]` | 0.0001283048110121374 | 6.784886733430378e-05 | 47.12% | 89.10% | 1.89x | ✅ |
| `hexbytes_new[2**8]` | 0.00012461583688302388 | 6.248779900371058e-05 | 49.86% | 99.42% | 1.99x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.3304910853627946e-05 | 2.4790117014351318e-05 | 42.75% | 74.69% | 1.75x | ✅ |
| `hexbytes_new[False]` | 6.106901222338446e-05 | 2.563924421811332e-05 | 58.02% | 138.19% | 2.38x | ✅ |
| `hexbytes_new[True]` | 6.088430321417119e-05 | 2.572424683408728e-05 | 57.75% | 136.68% | 2.37x | ✅ |
| `hexbytes_new[all byte values]` | 4.329437009804584e-05 | 2.4758089485261004e-05 | 42.81% | 74.87% | 1.75x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.2875344558991404e-05 | 2.43786917377083e-05 | 43.14% | 75.87% | 1.76x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.2083234051327646e-05 | 2.444383905093794e-05 | 41.92% | 72.16% | 1.72x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.119338493879659e-05 | 2.420407818230236e-05 | 41.24% | 70.19% | 1.70x | ✅ |
| `hexbytes_new[b'']` | 4.2905457216728945e-05 | 2.4582316725051635e-05 | 42.71% | 74.54% | 1.75x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.3305995460194865e-05 | 2.4447210423077696e-05 | 43.55% | 77.14% | 1.77x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.249719769537691e-05 | 2.4236632164009907e-05 | 42.97% | 75.34% | 1.75x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.272989575184725e-05 | 2.5483556096411774e-05 | 40.36% | 67.68% | 1.68x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.6600999399354425e-05 | 3.7077481998075795e-05 | 34.49% | 52.66% | 1.53x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2959092822718404e-05 | 2.4047388115321686e-05 | 44.02% | 78.64% | 1.79x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.292942717025779e-05 | 2.427959844968509e-05 | 43.44% | 76.81% | 1.77x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.3169995311254855e-05 | 2.4232758580215744e-05 | 43.87% | 78.15% | 1.78x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.3280794363005115e-05 | 2.41825793954338e-05 | 44.13% | 78.98% | 1.79x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.32074935160535e-05 | 2.4246737803672894e-05 | 43.88% | 78.20% | 1.78x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.350515049373995e-05 | 2.430633512682364e-05 | 44.13% | 78.99% | 1.79x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.986075902600479e-05 | 3.200620696440105e-05 | 35.81% | 55.78% | 1.56x | ✅ |
| `hexbytes_new[b'abc']` | 4.2704176737495715e-05 | 2.42941803602808e-05 | 43.11% | 75.78% | 1.76x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.741707250213392e-05 | 3.525073134660267e-05 | 47.71% | 91.25% | 1.91x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.00269277607181e-05 | 3.599012602952289e-05 | 48.61% | 94.57% | 1.95x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.881082425848242e-05 | 3.577281895443969e-05 | 48.01% | 92.36% | 1.92x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.798487060280546e-05 | 3.501826824025716e-05 | 48.49% | 94.14% | 1.94x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.812112216916764e-05 | 3.502762649263405e-05 | 48.58% | 94.48% | 1.94x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.812944803429693e-05 | 3.5323373130114345e-05 | 48.15% | 92.87% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.541660730150711e-05 | 3.3200099573302146e-05 | 49.25% | 97.04% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.739103978353318e-05 | 3.5139025659756346e-05 | 47.86% | 91.78% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.671232017016571e-05 | 3.479442965070302e-05 | 47.84% | 91.73% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.801816080026134e-05 | 3.6837415677582646e-05 | 45.84% | 84.64% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.975441784927517e-05 | 5.540046613634904e-05 | 38.28% | 62.01% | 1.62x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.761525447744637e-05 | 3.517583468691776e-05 | 47.98% | 92.22% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.799420376044523e-05 | 3.539002801217381e-05 | 47.95% | 92.13% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.720068827567812e-05 | 3.531102927732331e-05 | 47.45% | 90.31% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.767740521583857e-05 | 3.542362134776801e-05 | 47.66% | 91.05% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.730368207687408e-05 | 3.4758481089448005e-05 | 48.36% | 93.63% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.894792194345057e-05 | 3.5635867649850696e-05 | 48.31% | 93.48% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.191846530897338e-05 | 4.802387098657748e-05 | 41.38% | 70.58% | 1.71x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.753112092919674e-05 | 3.524894519119925e-05 | 47.80% | 91.58% | 1.92x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.190463715534492e-05 | 4.801966470702736e-05 | 41.37% | 70.56% | 1.71x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.80063349183294e-05 | 3.53450424133976e-05 | 48.03% | 92.41% | 1.92x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.813772748887096e-05 | 3.558566952782314e-05 | 47.77% | 91.48% | 1.91x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.832893228356869e-05 | 3.501716772226992e-05 | 48.75% | 95.13% | 1.95x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.742328023829936e-05 | 3.499683305906162e-05 | 48.09% | 92.66% | 1.93x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.701895485927764e-05 | 3.485041331398452e-05 | 48.00% | 92.30% | 1.92x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.879150567785277e-05 | 3.622351405443823e-05 | 47.34% | 89.91% | 1.90x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.916232072004945e-05 | 3.524253640343972e-05 | 49.04% | 96.25% | 1.96x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.761622024940824e-05 | 3.5085755793068064e-05 | 48.11% | 92.72% | 1.93x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.837373597419838e-05 | 3.527326362877538e-05 | 48.41% | 93.84% | 1.94x | ✅ |
| `hexbytes_new[long alternating]` | 5.0139240628075505e-05 | 3.2210031463433846e-05 | 35.76% | 55.66% | 1.56x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.195318697654477e-05 | 3.972294330585563e-05 | 51.53% | 106.31% | 2.06x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.234270232139636e-05 | 4.051582680178667e-05 | 50.80% | 103.24% | 2.03x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.210596305394704e-05 | 4.115269903469908e-05 | 49.88% | 99.52% | 2.00x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.233814868702e-05 | 4.0100417853246875e-05 | 51.30% | 105.33% | 2.05x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.72914706443586e-05 | 4.037825805699487e-05 | 53.74% | 116.18% | 2.16x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.012998990506263e-05 | 3.99945842025633e-05 | 50.09% | 100.35% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 7.84550126349813e-05 | 3.808938853283056e-05 | 51.45% | 105.98% | 2.06x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.56587327875324e-05 | 4.01892992398596e-05 | 53.08% | 113.14% | 2.13x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.135310618320648e-05 | 4.071652760330988e-05 | 49.95% | 99.80% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.103528246174843e-05 | 4.453619750692048e-05 | 45.04% | 81.95% | 1.82x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010843856038374808 | 6.293694951080373e-05 | 41.96% | 72.30% | 1.72x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.175104337718284e-05 | 4.040045222458675e-05 | 50.58% | 102.35% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.141181481805557e-05 | 3.9521727724625585e-05 | 51.45% | 105.99% | 2.06x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.193980254405221e-05 | 4.023564741643496e-05 | 50.90% | 103.65% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.23139410712873e-05 | 4.008099182129847e-05 | 51.31% | 105.37% | 2.05x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.194239945514788e-05 | 4.059972452496306e-05 | 50.45% | 101.83% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.185240147695443e-05 | 4.0908257255207895e-05 | 50.02% | 100.09% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.482187071622131e-05 | 5.465107914990775e-05 | 42.36% | 73.50% | 1.74x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.150912264799462e-05 | 3.9893841477149813e-05 | 51.06% | 104.32% | 2.04x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.80487608099056e-05 | 5.5938429118204714e-05 | 42.95% | 75.28% | 1.75x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.236878500378598e-05 | 4.026813671507655e-05 | 51.11% | 104.55% | 2.05x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.176431298999834e-05 | 4.181216869456235e-05 | 48.86% | 95.55% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.143405171241855e-05 | 3.9729747070855596e-05 | 51.21% | 104.97% | 2.05x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.179140134911314e-05 | 3.9802104660277504e-05 | 51.34% | 105.50% | 2.05x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.132324207799339e-05 | 4.1068545101239734e-05 | 49.50% | 98.02% | 1.98x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.362305174690161e-05 | 4.186225466413121e-05 | 49.94% | 99.76% | 2.00x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.16689919241252e-05 | 4.072140431481432e-05 | 50.14% | 100.56% | 2.01x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.196317183304054e-05 | 4.0355672262359884e-05 | 50.76% | 103.10% | 2.03x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.170790852783286e-05 | 4.004276094491502e-05 | 50.99% | 104.05% | 2.04x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.235301374551509e-05 | 2.4277279966007674e-05 | 42.68% | 74.46% | 1.74x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.249433363227857e-05 | 2.4147704818591607e-05 | 43.17% | 75.98% | 1.76x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.27328094581156e-05 | 2.4300855653724836e-05 | 43.13% | 75.85% | 1.76x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.139663685479882e-05 | 2.408734894794444e-05 | 41.81% | 71.86% | 1.72x | ✅ |
| `hexbytes_new[palindrome]` | 4.2635234252420996e-05 | 2.4353099818049892e-05 | 42.88% | 75.07% | 1.75x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.21384950701862e-05 | 2.4111887471792517e-05 | 42.78% | 74.76% | 1.75x | ✅ |
| `hexbytes_new[single 0xff]` | 4.186111375971561e-05 | 2.4646337084191046e-05 | 41.12% | 69.85% | 1.70x | ✅ |
| `hexbytes_new[single null byte]` | 4.202361166054305e-05 | 2.4919324725590784e-05 | 40.70% | 68.64% | 1.69x | ✅ |
| `hexbytes_new[two patterns]` | 4.2139890763296977e-05 | 2.4189481893972058e-05 | 42.60% | 74.21% | 1.74x | ✅ |
| `hexbytes_repr[0-9]` | 3.2512219263131356e-05 | 1.676660391871621e-05 | 48.43% | 93.91% | 1.94x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012514083405605974 | 4.1946074724884085e-05 | 66.48% | 198.34% | 2.98x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012504409428993658 | 4.181567858505858e-05 | 66.56% | 199.04% | 2.99x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.32444474944986e-05 | 2.1269615379493584e-05 | 60.05% | 150.33% | 2.50x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.188176542065442e-05 | 2.1183107081808176e-05 | 59.17% | 144.92% | 2.45x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.3270823681935806e-05 | 1.9199751241869345e-05 | 55.63% | 125.37% | 2.25x | ✅ |
| `hexbytes_repr[b'']` | 2.332935117050586e-05 | 1.3619859059369177e-05 | 41.62% | 71.29% | 1.71x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.901858034795348e-05 | 1.8117484623092913e-05 | 53.57% | 115.36% | 2.15x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.95856302744707e-05 | 1.5192156984643446e-05 | 48.65% | 94.74% | 1.95x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.349457607767767e-05 | 2.4518852385137118e-05 | 61.38% | 158.96% | 2.59x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007752225392459092 | 0.0002239633279140654 | 71.11% | 246.14% | 3.46x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.9047113579267212e-05 | 1.5458380336496564e-05 | 46.78% | 87.91% | 1.88x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.1312274128703706e-05 | 1.5325727631325492e-05 | 51.06% | 104.31% | 2.04x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.1642803180184565e-05 | 1.623732752980096e-05 | 48.69% | 94.88% | 1.95x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.163589999352409e-05 | 1.6139124815564062e-05 | 48.98% | 96.02% | 1.96x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.954591758304874e-05 | 1.5196190270533156e-05 | 48.57% | 94.43% | 1.94x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.125991076309931e-05 | 2.1103219265898252e-05 | 58.83% | 142.90% | 2.43x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00040951715265251083 | 0.0001225745233851458 | 70.07% | 234.10% | 3.34x | ✅ |
| `hexbytes_repr[b'abc']` | 2.9304521228730695e-05 | 1.521506466095797e-05 | 48.08% | 92.60% | 1.93x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00041120432518183857 | 0.0001233217998501325 | 70.01% | 233.44% | 3.33x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.0001012174128041951 | 3.581404659279832e-05 | 64.62% | 182.62% | 2.83x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.248646314270179e-05 | 1.6583277739316992e-05 | 48.95% | 95.90% | 1.96x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.0967241562555396e-05 | 1.608720078798188e-05 | 48.05% | 92.50% | 1.92x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.9965891082297714e-05 | 1.5889648253224832e-05 | 46.97% | 88.59% | 1.89x | ✅ |
| `hexbytes_repr[palindrome]` | 3.497105456350712e-05 | 1.69022099837083e-05 | 51.67% | 106.90% | 2.07x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.346995557866344e-05 | 2.4631379338669883e-05 | 61.19% | 157.68% | 2.58x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.87885346249016e-05 | 1.517315073741904e-05 | 47.29% | 89.73% | 1.90x | ✅ |
| `hexbytes_repr[single null byte]` | 2.866918639713852e-05 | 1.5151109235225413e-05 | 47.15% | 89.22% | 1.89x | ✅ |
| `hexbytes_repr[two patterns]` | 5.18516294380008e-05 | 2.1245613947721432e-05 | 59.03% | 144.06% | 2.44x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.6927600419241444e-05 | 1.6072878905549046e-05 | 5.05% | 5.32% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.424585204991758e-05 | 4.1644070565585604e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.4435283225365155e-05 | 4.1577948074005626e-05 | 6.43% | 6.87% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.224047107469944e-05 | 2.130268101113273e-05 | 4.22% | 4.40% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.202309627235363e-05 | 2.2151691852729276e-05 | -0.58% | -0.58% | 0.99x | ❌ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.045574649366118e-05 | 1.924184624935677e-05 | 5.93% | 6.31% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0911263832198636e-05 | 1.233824206622649e-05 | -13.08% | -11.57% | 0.88x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.8651166659187185e-05 | 1.8135695715024305e-05 | 2.76% | 2.84% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6077484176690486e-05 | 1.5255792344322468e-05 | 5.11% | 5.39% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5752091938216453e-05 | 2.467248268600337e-05 | 4.19% | 4.38% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022679065096893513 | 0.0002247087096912761 | 0.92% | 0.93% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.5679398111503165e-05 | 1.5237502378816517e-05 | 2.82% | 2.90% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6182248512423522e-05 | 1.5380854007935013e-05 | 4.95% | 5.21% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.670577969243905e-05 | 1.59273092536168e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.6688922655150727e-05 | 1.5946062562383394e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6013559095854507e-05 | 1.5332543107217336e-05 | 4.25% | 4.44% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.1860489406181404e-05 | 2.120353706450905e-05 | 3.01% | 3.10% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012560662389369813 | 0.00012217190900250854 | 2.73% | 2.81% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.6067090235686098e-05 | 1.5326737408845746e-05 | 4.61% | 4.83% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.0001262810686672635 | 0.0001223486585855146 | 3.11% | 3.21% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.701791773291605e-05 | 3.584560738060745e-05 | 3.17% | 3.27% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.6985519539681517e-05 | 1.609615934374115e-05 | 5.24% | 5.53% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6444188385307507e-05 | 1.585996580292986e-05 | 3.55% | 3.68% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6264707204340772e-05 | 1.5346713165460814e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.766431046343576e-05 | 1.701781372058361e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.589787012980456e-05 | 2.4655282351677517e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5726046647598844e-05 | 1.5109406270373662e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.5946588033773766e-05 | 1.521511630183306e-05 | 4.59% | 4.81% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.200670614176948e-05 | 2.1196626013331825e-05 | 3.68% | 3.82% | 1.04x | ✅ |
