using System;
using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Utility;
using _Game._1_Ads.Scripts;

namespace _Game.Systems._CoreSystem
{
    public class Dispatcher<T> where T : Enum
    {
        private readonly IDictionary<T, Action<EventArgs>> _eventHandlers =
            new Dictionary<T, Action<EventArgs>>();

        private readonly IDictionary<T, Action> _emptyEventHandlers =
            new Dictionary<T, Action>();


        public void Send(T eventId)
        {
            Send(eventId, EventArgs.Empty);
        }

        public void Send(T eventId, EventArgs args)
        {
            if (_eventHandlers.TryGetValue(eventId, out var handler))
            {
                handler?.Invoke(args);
            }

            if (_emptyEventHandlers.TryGetValue(eventId, out var emptyHandler))
            {
                emptyHandler?.Invoke();
            }
        }

        public void Subscribe(T eventId, Action act)
        {
            if (!_emptyEventHandlers.ContainsKey(eventId))
            {
                _emptyEventHandlers[eventId] = act;
            }
            else
            {
                _emptyEventHandlers[eventId] += act;
            }
        }

        public void Subscribe(T eventId, Action<EventArgs> act)
        {
            if (!_eventHandlers.ContainsKey(eventId))
            {
                _eventHandlers[eventId] = act;
            }
            else
            {
                _eventHandlers[eventId] += act;
            }
        }

        public void Unsubscribe(T eventId, Action<EventArgs> action)
        {
            if (_eventHandlers.ContainsKey(eventId))
            {
                _eventHandlers[eventId] -= action;
            }
        }

        public void Unsubscribe(T eventId, Action action)
        {
            if (_emptyEventHandlers.ContainsKey(eventId))
            {
                _emptyEventHandlers[eventId] -= action;
            }
        }

        public void Reset(T onInterCompleted)
        {
            if (_eventHandlers.ContainsKey(onInterCompleted))
            {
                _eventHandlers[onInterCompleted] = null;
            }

            if (_emptyEventHandlers.ContainsKey(onInterCompleted))
            {
                _emptyEventHandlers[onInterCompleted] = null;
            }
        }
    }
}