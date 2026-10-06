from mqom import MQOM3Parameters, Category, TradeOff, Variant, VALID_FIELD_TRADEOFF

LABEL_CAT = {
    Category.I:   'L1',
    Category.III: 'L3',
    Category.V:   'L5',
}

LABEL_FIELD = {
    2:  'gf2',
    16: 'gf16',
}

LABEL_TRADEOFF = {
    TradeOff.SHORTER: 'shorter',
    TradeOff.SHORT:   'short',
    TradeOff.FAST:    'fast',
}

LABEL_VARIANT = {
    Variant.CORRELATED_TREE: 'ct',
    Variant.ONE_TREE: 'ot',
}

def gey_key_of(d, searched_value):
    for key, value in d.items():
        if value == searched_value:
            return key
    raise ValueError('No key has the search value.')

def get_label(cat, field_size, trade_off, variant):
    label = f'MQOM3-{LABEL_CAT[cat]}-{LABEL_FIELD[field_size]}'
    label += f'-{LABEL_TRADEOFF[trade_off]}-{LABEL_VARIANT[variant]}'
    return label

def get_instance_from_label(label):
    scheme, label_cat, label_field, label_tradeoff, label_variant = label.split('-')
    assert scheme == 'MQOM3'
    cat = gey_key_of(LABEL_CAT, label_cat)
    field_size = gey_key_of(LABEL_FIELD, label_field)
    trade_off = gey_key_of(LABEL_TRADEOFF, label_tradeoff)
    variant = gey_key_of(LABEL_VARIANT, label_variant)
    return MQOM3Parameters.get(cat, field_size, trade_off, variant)

def all_instances():
    """ Yield (cat, field_size, trade_off, variant) for all the supported instances.

        This is the single canonical enumeration of the 18 instances: scripts
        that need to iterate over all of them (run.py, sizes.py, kat.py, ...)
        should use this instead of repeating their own nested loops, so that
        they can't silently drift out of sync with one another.

        Valid combinations: gf2->shorter only; gf16->fast or short only.
    """
    for cat in [Category.I, Category.III, Category.V]:
        for field_size in [2, 16]:
            for trade_off in VALID_FIELD_TRADEOFF[field_size]:
                for variant in [Variant.CORRELATED_TREE, Variant.ONE_TREE]:
                    yield (cat, field_size, trade_off, variant)
