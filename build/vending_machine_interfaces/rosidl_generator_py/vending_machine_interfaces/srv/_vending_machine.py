# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vending_machine_interfaces:srv/VendingMachine.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VendingMachine_Request(type):
    """Metaclass of message 'VendingMachine_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vending_machine_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vending_machine_interfaces.srv.VendingMachine_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__vending_machine__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__vending_machine__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__vending_machine__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__vending_machine__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__vending_machine__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VendingMachine_Request(metaclass=Metaclass_VendingMachine_Request):
    """Message class 'VendingMachine_Request'."""

    __slots__ = [
        '_selected_item',
        '_amount_inserted',
        '_superhero_choice',
    ]

    _fields_and_field_types = {
        'selected_item': 'string',
        'amount_inserted': 'double',
        'superhero_choice': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.selected_item = kwargs.get('selected_item', str())
        self.amount_inserted = kwargs.get('amount_inserted', float())
        self.superhero_choice = kwargs.get('superhero_choice', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.selected_item != other.selected_item:
            return False
        if self.amount_inserted != other.amount_inserted:
            return False
        if self.superhero_choice != other.superhero_choice:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def selected_item(self):
        """Message field 'selected_item'."""
        return self._selected_item

    @selected_item.setter
    def selected_item(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'selected_item' field must be of type 'str'"
        self._selected_item = value

    @builtins.property
    def amount_inserted(self):
        """Message field 'amount_inserted'."""
        return self._amount_inserted

    @amount_inserted.setter
    def amount_inserted(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'amount_inserted' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'amount_inserted' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._amount_inserted = value

    @builtins.property
    def superhero_choice(self):
        """Message field 'superhero_choice'."""
        return self._superhero_choice

    @superhero_choice.setter
    def superhero_choice(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'superhero_choice' field must be of type 'str'"
        self._superhero_choice = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_VendingMachine_Response(type):
    """Metaclass of message 'VendingMachine_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vending_machine_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vending_machine_interfaces.srv.VendingMachine_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__vending_machine__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__vending_machine__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__vending_machine__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__vending_machine__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__vending_machine__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VendingMachine_Response(metaclass=Metaclass_VendingMachine_Response):
    """Message class 'VendingMachine_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_change',
        '_remaining_amount',
        '_reward_message',
        '_sunday_special',
        '_bible_verse',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'change': 'double',
        'remaining_amount': 'double',
        'reward_message': 'string',
        'sunday_special': 'string',
        'bible_verse': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.change = kwargs.get('change', float())
        self.remaining_amount = kwargs.get('remaining_amount', float())
        self.reward_message = kwargs.get('reward_message', str())
        self.sunday_special = kwargs.get('sunday_special', str())
        self.bible_verse = kwargs.get('bible_verse', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.change != other.change:
            return False
        if self.remaining_amount != other.remaining_amount:
            return False
        if self.reward_message != other.reward_message:
            return False
        if self.sunday_special != other.sunday_special:
            return False
        if self.bible_verse != other.bible_verse:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def change(self):
        """Message field 'change'."""
        return self._change

    @change.setter
    def change(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'change' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'change' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._change = value

    @builtins.property
    def remaining_amount(self):
        """Message field 'remaining_amount'."""
        return self._remaining_amount

    @remaining_amount.setter
    def remaining_amount(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining_amount' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'remaining_amount' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._remaining_amount = value

    @builtins.property
    def reward_message(self):
        """Message field 'reward_message'."""
        return self._reward_message

    @reward_message.setter
    def reward_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reward_message' field must be of type 'str'"
        self._reward_message = value

    @builtins.property
    def sunday_special(self):
        """Message field 'sunday_special'."""
        return self._sunday_special

    @sunday_special.setter
    def sunday_special(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sunday_special' field must be of type 'str'"
        self._sunday_special = value

    @builtins.property
    def bible_verse(self):
        """Message field 'bible_verse'."""
        return self._bible_verse

    @bible_verse.setter
    def bible_verse(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bible_verse' field must be of type 'str'"
        self._bible_verse = value


class Metaclass_VendingMachine(type):
    """Metaclass of service 'VendingMachine'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vending_machine_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vending_machine_interfaces.srv.VendingMachine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__vending_machine

            from vending_machine_interfaces.srv import _vending_machine
            if _vending_machine.Metaclass_VendingMachine_Request._TYPE_SUPPORT is None:
                _vending_machine.Metaclass_VendingMachine_Request.__import_type_support__()
            if _vending_machine.Metaclass_VendingMachine_Response._TYPE_SUPPORT is None:
                _vending_machine.Metaclass_VendingMachine_Response.__import_type_support__()


class VendingMachine(metaclass=Metaclass_VendingMachine):
    from vending_machine_interfaces.srv._vending_machine import VendingMachine_Request as Request
    from vending_machine_interfaces.srv._vending_machine import VendingMachine_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
