from mqom import MQOM3Parameters, MQOM3
from labels import get_label, all_instances

for (cat, field_size, trade_off, variant) in all_instances():
    # Get MQOM3 instance
    params = MQOM3Parameters.get(cat, field_size, trade_off, variant)
    mqom = MQOM3(params, None)

    # Get Sizes
    pk_size = mqom.get_public_key_bytesize()
    sk_size = mqom.get_secret_key_bytesize()
    sig_size = mqom.get_signature_bytesize()

    # Print Sizes
    label = get_label(cat, field_size, trade_off, variant)
    print(f'===== {label} =====')
    print(f' - Public Key: {pk_size} B')
    print(f' - Secret Key: {sk_size} B')
    print(f' - Sig Size: {sig_size} B')
    print()
